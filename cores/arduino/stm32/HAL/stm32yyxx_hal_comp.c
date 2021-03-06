#include "stm32_def_build.h"

#ifdef STM32F0xx
#include "stm32f0xx_hal_comp.c"
#endif
#ifdef STM32F1xx
// none
#endif
#ifdef STM32F2xx
// none
#endif
#ifdef STM32F3xx
#include "stm32f3xx_hal_comp.c"
#endif
#ifdef STM32F4xx
// none
#endif
#ifdef STM32F7xx
// none
#endif
#ifdef STM32L0xx
#include "stm32l0xx_hal_comp.c"
#endif
#ifdef STM32L1xx
#include "stm32l1xx_hal_comp.c"
#endif
#ifdef STM32L4xx
#include "stm32l4xx_hal_comp.c"
#endif
