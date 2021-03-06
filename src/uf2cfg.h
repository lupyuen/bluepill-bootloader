#define UF2_VERSION "1.00"
#define PRODUCT_NAME "STM32BLUEPILL"
#define BOARD_ID "STM32BLUEPILL"
#define INDEX_URL "https://visualbluepill.github.io"
#define UF2_NUM_BLOCKS 8000
#define VOLUME_LABEL "BLUEPILL"
// where the UF2 files are allowed to write data - we allow MBR, since it seems part of the softdevice .hex file
#define USER_FLASH_START (uint32_t)(APP_BASE_ADDRESS)
#define USER_FLASH_END (0x08000000+FLASH_SIZE_OVERRIDE)
