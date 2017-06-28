#ifndef __INCLUDED_RABIRD_TOOLKIT_OS_CONFIG
#define __INCLUDED_RABIRD_TOOLKIT_OS_CONFIG

#define R_OS_FREERTOS 1

// Include all FreeRTOS stuffs
#if defined(ARDUINO)
#include <Arduino_FreeRTOS.h>
#else
#include <FreeRTOS.h>
#endif

#include <semphr.h>

#endif // #ifndef __INCLUDED_RABIRD_TOOLKIT_OS_CONFIG
