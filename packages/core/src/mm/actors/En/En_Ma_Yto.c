#include <combo.h>
#include <combo/item.h>

static void EnMaYto_WarpWrapper(Actor* this, GameState_Play* play)
{
    ActorFunc EnMaYto_Warp;

    EnMaYto_Warp = actorAddr(AC_EN_MA_YTO, 0x80b905b0);
    EnMaYto_Warp(this, play);

    if (comboConfig(CFG_ER_OVERWORLD))
        gPlay->nextEntrance = 0x6480;
}

static void EnMaYto_SetWarpHandler(Actor* this)
{
    (*(void**)((char*)this + 0x188)) = EnMaYto_WarpWrapper;
}

PATCH_FUNC(0x80b9059c, EnMaYto_SetWarpHandler);

int EnMaYto_HasGivenItem(Actor* this)
{
    int ret;

    ret = Actor_HasParent(this);
    if (ret)
        gMmExtraFlags.maskRomani = 1;
    return ret;
}

PATCH_CALL(0x80b900d4, EnMaYto_HasGivenItem);

void EnMaYto_GiveItem(Actor* this, GameState_Play* play, s16 gi, float a, float b)
{
    int npc;

    npc = -1;
    if (gMmExtraFlags.maskRomani)
    {
        gi = GI_MM_RUPEE_GOLD;
    }
    else
    {
        npc = NPC_MM_CREMIA_ESCORT;
    }
    comboGiveItemNpc(this, play, gi, npc, a, b);
}

PATCH_CALL(0x80b9012c, EnMaYto_GiveItem);
PATCH_CALL(0x80b9014c, EnMaYto_GiveItem);
