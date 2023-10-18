#ifndef COMBO_SHADER_H
#define COMBO_SHADER_H

#if !defined(__ASSEMBLER__)
# include <combo/game_state.h>
# include <combo/types.h>

typedef void (*ShaderFunc)(GameState_Play* play, s16 index);

typedef struct PACKED ALIGNED(4)
{
    ShaderFunc  func;
    u32         lists[8];
}
Shader;

extern const Shader kShaders[256];
#endif

#define DRAWGI_NONE 0

#define DRAWGI_BOTTLE_EMPTY                 0x01
#define DRAWGI_SMALL_KEY                    0x02
#define DRAWGI_RECOVERY_HEART               0x03
#define DRAWGI_BOSS_KEY                     0x04
#define DRAWGI_COMPASS                      0x05
#define DRAWGI_OOT_MEDALLION_FOREST         0x06
#define DRAWGI_OOT_MEDALLION_FIRE           0x07
#define DRAWGI_OOT_MEDALLION_WATER          0x08
#define DRAWGI_OOT_MEDALLION_SPIRIT         0x09
#define DRAWGI_OOT_MEDALLION_SHADOW         0x0a
#define DRAWGI_OOT_MEDALLION_LIGHT          0x0b
#define DRAWGI_DEKU_NUT                     0x0c
#define DRAWGI_HEART_CONTAINER              0x0d
#define DRAWGI_HEART_PIECE                  0x0e
#define DRAWGI_QUIVER                       0x0f
#define DRAWGI_QUIVER2                      0x10
#define DRAWGI_QUIVER3                      0x11
#define DRAWGI_BOMB_BAG                     0x12
#define DRAWGI_BOMB_BAG2                    0x13
#define DRAWGI_BOMB_BAG3                    0x14
#define DRAWGI_DEKU_STICK                   0x15
#define DRAWGI_MAP                          0x16
#define DRAWGI_OOT_SHIELD_DEKU              0x17
#define DRAWGI_MAGIC_SMALL                  0x18
#define DRAWGI_MAGIC_LARGE                  0x19
#define DRAWGI_BOMB                         0x1a
#define DRAWGI_STONE_OF_AGONY               0x1b
#define DRAWGI_WALLET                       0x1c
#define DRAWGI_WALLET2                      0x1d
#define DRAWGI_OOT_GERUDO_CARD              0x1e
#define DRAWGI_ARROW                        0x1f
#define DRAWGI_ARROW2                       0x20
#define DRAWGI_ARROW3                       0x21
#define DRAWGI_BOMBCHU                      0x22
#define DRAWGI_OOT_EGG                      0x23
#define DRAWGI_OOT_SCALE_SILVER             0x24
#define DRAWGI_OOT_SCALE_GOLD               0x25
#define DRAWGI_OOT_SHIELD_HYLIAN            0x26
#define DRAWGI_OOT_HOOKSHOT                 0x27
#define DRAWGI_OOT_LONGSHOT                 0x28
#define DRAWGI_OCARINA_TIME                 0x29
#define DRAWGI_BOTTLE_MILK                  0x2a
#define DRAWGI_MASK_KEATON                  0x2b
#define DRAWGI_OOT_MASK_SPOOKY              0x2c
#define DRAWGI_OOT_SLINGSHOT                0x2d
#define DRAWGI_OOT_BOOMERANG                0x2e
#define DRAWGI_OOT_BOW                      0x2f
#define DRAWGI_LENS                         0x30
#define DRAWGI_POTION_GREEN                 0x31
#define DRAWGI_POTION_RED                   0x32
#define DRAWGI_POTION_BLUE                  0x33
#define DRAWGI_OOT_SHIELD_MIRROR            0x34
#define DRAWGI_OOT_ZELDA_LETTER             0x35
#define DRAWGI_OOT_TUNIC_GORON              0x36
#define DRAWGI_OOT_TUNIC_ZORA               0x37
#define DRAWGI_MAGIC_BEAN                   0x38
#define DRAWGI_FISH                         0x39
#define DRAWGI_OOT_POACHER_SAW              0x3a
#define DRAWGI_OOT_MEGATON_HAMMER           0x3b
#define DRAWGI_OOT_BIGGORON_SWORD           0x3c
#define DRAWGI_OOT_CHICKEN                  0x3d
#define DRAWGI_OOT_RUTO_LETTER              0x3e
#define DRAWGI_OOT_OCARINA_FAIRY            0x3f
#define DRAWGI_OOT_BOOTS_IRON               0x40
#define DRAWGI_OOT_SEEDS                    0x41
#define DRAWGI_OOT_GAUNTLETS_SILVER         0x42
#define DRAWGI_OOT_GAUNTLETS_GOLD           0x43
#define DRAWGI_OOT_MASK_SKULL               0x44
#define DRAWGI_MASK_BUNNY                   0x45
#define DRAWGI_MASK_TRUTH                   0x46
#define DRAWGI_OOT_EYE_DROPS                0x47
#define DRAWGI_OOT_ODD_POTION               0x48
#define DRAWGI_OOT_ODD_MUSHROOM             0x49
#define DRAWGI_OOT_CLAIM_CHECK              0x4a
#define DRAWGI_OOT_BROKEN_GORON_SWORD       0x4b
#define DRAWGI_OOT_PRESCRIPTION             0x4c
#define DRAWGI_OOT_GORON_BRACELET           0x4d
#define DRAWGI_OOT_SOLD_OUT                 0x4e
#define DRAWGI_OOT_EYEBALL_FROG             0x4f
#define DRAWGI_OOT_MASK_GORON               0x50
#define DRAWGI_OOT_MASK_ZORA                0x51
#define DRAWGI_OOT_MASK_GERUDO              0x52
#define DRAWGI_OOT_COJIRO                   0x53
#define DRAWGI_OOT_BOOTS_HOVER              0x54
#define DRAWGI_ARROW_FIRE                   0x55
#define DRAWGI_ARROW_ICE                    0x56
#define DRAWGI_ARROW_LIGHT                  0x57
#define DRAWGI_OOT_GS_TOKEN                 0x58
#define DRAWGI_OOT_SPELL_FIRE               0x59
#define DRAWGI_OOT_SPELL_WIND               0x5a
#define DRAWGI_OOT_SPELL_LOVE               0x5b
#define DRAWGI_OOT_BLUE_FIRE                0x5c
#define DRAWGI_BUG                          0x5d
#define DRAWGI_POE                          0x5e
#define DRAWGI_FAIRY                        0x5f
#define DRAWGI_OOT_BULLET_BAG2              0x60
#define DRAWGI_OOT_RUPEE_GREEN              0x61
#define DRAWGI_OOT_RUPEE_BLUE               0x62
#define DRAWGI_OOT_RUPEE_RED                0x63
#define DRAWGI_BIG_POE                      0x64
#define DRAWGI_OOT_RUPEE_PURPLE             0x65
#define DRAWGI_OOT_RUPEE_HUGE               0x66
#define DRAWGI_OOT_BULLET_BAG3              0x67
#define DRAWGI_OOT_SWORD_KOKIRI             0x68
#define DRAWGI_GS_TOKEN2                    0x69
#define DRAWGI_OOT_SWORD_MASTER             0x6a
#define DRAWGI_OOT_STONE_EMERALD            0x6b
#define DRAWGI_OOT_STONE_RUBY               0x6c
#define DRAWGI_OOT_STONE_SAPPHIRE           0x6d
#define DRAWGI_DEFENSE_UPGRADE              0x6e
#define DRAWGI_MM_MASK_KAMARO               0x6f
#define DRAWGI_MM_MASK_COUPLE               0x70
#define DRAWGI_MM_NOTEBOOK                  0x71
#define DRAWGI_MM_MASK_STONE                0x72
#define DRAWGI_MM_MASK_KAFEI                0x73
#define DRAWGI_MM_MASK_TROUPE_LEADER        0x74
#define DRAWGI_MM_MASK_BREMEN               0x75
#define DRAWGI_MM_MASK_ALL_NIGHT            0x76
#define DRAWGI_MM_MASK_DON_GERO             0x77
#define DRAWGI_MM_SHIELD_HERO               0x78
#define DRAWGI_MM_HOOKSHOT                  0x79
#define DRAWGI_MM_WORLD_MAP                 0x7a
#define DRAWGI_MM_BOW                       0x7b
#define DRAWGI_MM_SHIELD_MIRROR             0x7c
#define DRAWGI_MM_LETTER_TO_MAMA            0x7d
#define DRAWGI_MM_MASK_SUN                  0x7e
#define DRAWGI_MM_MASK_BLAST                0x7f
#define DRAWGI_MM_BOTTLE_FAIRY              0x80
#define DRAWGI_MM_MASK_SCENTS               0x81
#define DRAWGI_MM_MASK_CAPTAIN              0x82
#define DRAWGI_MM_DEED_SWAMP                0x83
#define DRAWGI_MM_DEED_MOUNTAIN             0x84
#define DRAWGI_MM_RUPEE_GOLD                0x85
#define DRAWGI_MM_DEED_OCEAN                0x86
#define DRAWGI_MM_MASK_GORON                0x87
#define DRAWGI_MM_MASK_ZORA                 0x88
#define DRAWGI_MM_RUPEE_GREEN               0x89
#define DRAWGI_MM_RUPEE_BLUE                0x8a
#define DRAWGI_MM_RUPEE_RED                 0x8b
#define DRAWGI_MM_RUPEE_PURPLE              0x8c
#define DRAWGI_MM_RUPEE_SILVER              0x8d
#define DRAWGI_MM_SWORD_KOKIRI              0x8e
#define DRAWGI_MM_BOTTLE_POTION_RED         0x8f
#define DRAWGI_MM_ZORA_EGG                  0x90
#define DRAWGI_MM_MOON_TEAR                 0x91
#define DRAWGI_MM_DEED_LAND                 0x92
#define DRAWGI_MM_MASK_DEKU                 0x93
#define DRAWGI_MM_REMAINS_ODOLWA            0x94
#define DRAWGI_MM_KEG                       0x95
#define DRAWGI_MM_GOLD_DUST                 0x96
#define DRAWGI_MM_BOTTLED_GOLD_DUST         0x97
#define DRAWGI_MM_UNK8                      0x98
#define DRAWGI_MM_UNK9                      0x99
#define DRAWGI_MM_SEAHORSE                  0x9a
#define DRAWGI_MM_REMAINS_GOHT              0x9b
#define DRAWGI_MM_REMAINS_GYORG             0x9c
#define DRAWGI_MM_REMAINS_TWINMOLD          0x9d
#define DRAWGI_MM_SWORD_RAZOR               0x9e
#define DRAWGI_MM_SWORD_GILDED              0x9f
#define DRAWGI_MM_GREAT_FAIRY_SWORD         0xa0
#define DRAWGI_MM_MASK_GARO                 0xa1
#define DRAWGI_MM_MASK_GREAT_FAIRY          0xa2
#define DRAWGI_MM_MASK_GIBDO                0xa3
#define DRAWGI_MM_ROOM_KEY                  0xa4
#define DRAWGI_MM_LETTER_TO_KAFEI           0xa5
#define DRAWGI_MM_PENDANT_OF_MEMORIES       0xa6
#define DRAWGI_MM_MAGIC_MUSHROOM            0xa7
#define DRAWGI_MM_MASK_ROMANI               0xa8
#define DRAWGI_MM_MASK_POSTMAN              0xa9
#define DRAWGI_MM_MASK_GIANT                0xaa
#define DRAWGI_MM_BOTTLE_CHATEAU            0xab
#define DRAWGI_MM_PICTOBOX                  0xac
#define DRAWGI_MM_MASK_FIERCE_DEITY         0xad
#define DRAWGI_NOTE_PURPLE                  0xae
#define DRAWGI_NOTE_BLUE                    0xaf
#define DRAWGI_NOTE_GREEN                   0xb0
#define DRAWGI_NOTE_YELLOW                  0xb1
#define DRAWGI_NOTE_ORANGE                  0xb2
#define DRAWGI_NOTE_RED                     0xb3
#define DRAWGI_NOTE_PURPLE_DOWN             0xb4
#define DRAWGI_NOTE_BLUE_DOWN               0xb5
#define DRAWGI_NOTE_GREEN_DOWN              0xb6
#define DRAWGI_NOTE_YELLOW_DOWN             0xb7
#define DRAWGI_NOTE_ORANGE_DOWN             0xb8
#define DRAWGI_NOTE_RED_DOWN                0xb9
#define DRAWGI_OOT_STICK_UPGRADE            0xba
#define DRAWGI_OOT_STICK_UPGRADE2           0xbb
#define DRAWGI_OOT_NUT_UPGRADE              0xbc
#define DRAWGI_OOT_NUT_UPGRADE2             0xbd
#define DRAWGI_MM_SPIN_UPGRADE              0xbe
#define DRAWGI_MM_STRAY_FAIRY               0xbf
#define DRAWGI_MM_GS_TOKEN_SWAMP            0xc0
#define DRAWGI_MM_GS_TOKEN_OCEAN            0xc1
#define DRAWGI_MM_STRAY_FAIRY_WF            0xc2
#define DRAWGI_MM_STRAY_FAIRY_SH            0xc3
#define DRAWGI_MM_STRAY_FAIRY_GB            0xc4
#define DRAWGI_MM_STRAY_FAIRY_ST            0xc5
#define DRAWGI_MM_STRAY_FAIRY_TOWN          0xc6
#define DRAWGI_MILK                         0xc7
#define DRAWGI_MM_CHATEAU                   0xc8
#define DRAWGI_MM_OWL                       0xc9
#define DRAWGI_TRIFORCE                     0xca
#define DRAWGI_OOT_RUPEE_SILVER             0xcb
#define DRAWGI_SOUL                         0xcc
#define DRAWGI_SKELETON_KEY                 0xcd
#define DRAWGI_COIN_YELLOW                  0xce
#define DRAWGI_COIN_RED                     0xcf
#define DRAWGI_COIN_GREEN                   0xd0
#define DRAWGI_COIN_BLUE                    0xd1
#define DRAWGI_MAGIC_UPGRADE                0xd2
#define DRAWGI_MAGIC_UPGRADE2               0xd3
#define DRAWGI_TRIFORCE_POWER               0xd4
#define DRAWGI_TRIFORCE_COURAGE             0xd5
#define DRAWGI_TRIFORCE_WISDOM              0xd6
#define DRAWGI_SOUL_BOSS                    0xd7
#define DRAWGI_WALLET3                      0xd8
#define DRAWGI_WALLET4                      0xd9
#define DRAWGI_WALLET5                      0xda
#define DRAWGI_OOT_SILVER_POUCH             0xdb
#define DRAWGI_OOT_RUPEE_MAGICAL            0xdc
#define DRAWGI_BUTTON_A                     0xdd
#define DRAWGI_BUTTON_C_RIGHT               0xde
#define DRAWGI_BUTTON_C_LEFT                0xdf
#define DRAWGI_BUTTON_C_UP                  0xe0
#define DRAWGI_BUTTON_C_DOWN                0xe1
#define DRAWGI_SOUL_NPC                     0xe2

#endif
