#pragma once



/* OLED */
#ifdef OLED_ENABLE
#    define OLED_BRIGHTNESS 5
#    define OLED_TIMEOUT 10000000
/* Mapping I2C2 for OLED */
#    define I2C1_SCL_PIN B10
#    define I2C1_SDA_PIN B11
#    define I2C_DRIVER I2CD2
#    define OLED_DISPLAY_128X64
#endif