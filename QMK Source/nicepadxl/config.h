
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

// Oled settings
#define OLED_FADE_OUT
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3
#define OLED_DISPLAY_128X64
