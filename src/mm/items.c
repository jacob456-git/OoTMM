#include <combo.h>

#define CB_PASSIVE 0x00
#define CB_GETITEM 0xff

int GetItemCollectBehavior(s16 itemId)
{
    switch (itemId)
    {
    case ITEM_MM_STICK:
        if (gMmSave.inventory.items[ITS_MM_STICKS] != ITEM_NONE)
            return CB_PASSIVE;
        break;
    case ITEM_MM_NUT:
    case ITEM_MM_NUTS_5:
        if (gMmSave.inventory.items[ITS_MM_NUTS] != ITEM_NONE)
            return CB_PASSIVE;
        break;
    case ITEM_MM_BOMB:
    case ITEM_MM_ARROWS_10:
        return CB_PASSIVE;
    }
    return CB_GETITEM;
}


int comboGiveItem(Actor* actor, GameState_Play* play, s16 itemId, float a, float b)
{
    switch (itemId)
    {
    case GI_MM_BOTTLED_POTION_RED:
        itemId = comboOverrideNpc(0x00, GI_MM_BOTTLED_POTION_RED);
        break;
    case GI_MM_PICTOGRAPH_BOX:
        itemId = comboOverrideNpc(0x01, GI_MM_PICTOGRAPH_BOX);
        break;
    case GI_MM_SONG_AWAKENING:
        itemId = comboOverrideNpc(0x02, GI_MM_SONG_AWAKENING);
        break;
    }

    switch (actor->id)
    {
    case AC_EN_BOX:
        itemId = comboOverrideChest(play->sceneId, actor->variable & 0x1f, (actor->variable >> 5) & 0xff);
        break;
    }

    return GiveItem(actor, play, itemId, a, b);
}
