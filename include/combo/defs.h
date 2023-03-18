#ifndef COMBO_DEFS_H
#define COMBO_DEFS_H

#define COMBO_CTX_ADDR_OOT 0x80006584
#define COMBO_CTX_ADDR_MM  0x80098280

#ifdef GAME_OOT
# define PAYLOAD_ROM    0x01f80000
# define PAYLOAD_RAM    0x80600000
# define LOADER_ADDR    0x80006600
# define LOADER_NEXT    InitDmaManager

# define COMBO_CTX_ADDR_READ    COMBO_CTX_ADDR_OOT
# define COMBO_CTX_ADDR_WRITE   COMBO_CTX_ADDR_MM
#endif

#ifdef GAME_MM
# define PAYLOAD_ROM    0x01fc0000
# define PAYLOAD_RAM    0x80740000
# define LOADER_ADDR    0x800982b0
# define LOADER_NEXT    InitDmaManager

# define COMBO_CTX_ADDR_READ    COMBO_CTX_ADDR_MM
# define COMBO_CTX_ADDR_WRITE   COMBO_CTX_ADDR_OOT
#endif

#define MM_BASE       0x02000000
#define PAYLOAD_SIZE  0x00040000

#define MASK_FOREIGN_GI     0x0100
#define MASK_FOREIGN_OBJECT 0x1000
#define MASK_CUSTOM_OBJECT  0x2000

#endif /* COMBO_DEFS_H */
