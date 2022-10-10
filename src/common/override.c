#include <combo.h>

#if defined(GAME_OOT)
# define OVERRIDE_ADDR 0x03fe1000
#else
# define OVERRIDE_ADDR 0x03fe2000
#endif

typedef struct PACKED
{
    u16 key;
    u16 value;
}
ComboOverride;

#define KEY(scene, id) (((scene) << 8) | (id))

static ALIGNED(16) ComboOverride gComboOverrides[256];

void comboInitOverride(void)
{
    DMARomToRam(OVERRIDE_ADDR | PI_DOM1_ADDR2, &gComboOverrides, sizeof(gComboOverrides));
}

static s32 comboOverrideRaw(u16 key)
{
    for (int i = 0; i < 256; ++i)
    {
        ComboOverride* o = &gComboOverrides[i];
        if (o->key == 0xffff)
            break;
        if (o->key == key)
            return o->value;
    }
    return -1;
}

static s16 comboOverride(u16 sceneId, u16 id, s16 gi)
{
    s32 override;
    u16 absGi;

    override = comboOverrideRaw(KEY(sceneId, id));
    absGi = gi > 0 ? gi : -gi;
    if (override >= 0)
        absGi = override;
    absGi = comboProgressive(absGi);
    return gi > 0 ? absGi : -absGi;
}

s16 comboOverrideChest(u16 sceneId, u16 id, s16 gi)
{
    return comboOverride(sceneId, id & 0x3f, gi);
}

s16 comboOverrideCollectible(u16 sceneId, u16 id, s16 gi)
{
    return comboOverride(sceneId, (id & 0x3f) | 0x40, gi);
}

s16 comboOverrideSpecial(u16 id, s16 gi)
{
    return comboOverride(SCE_SPECIAL, id, gi);
}

s16 comboOverrideNpc(u16 id, s16 gi)
{
    return comboOverride(SCE_NPC, id, gi);
}
