#pragma once

/*按需使能外设，无需则留空*/

#undef HAL_USE_PWM
#define HAL_USE_PWM TRUE

#undef HAL_USE_PAL
#define HAL_USE_PAL TRUE

#undef HAL_USE_I2C
#define HAL_USE_I2C TRUE

#include_next <halconf.h>
