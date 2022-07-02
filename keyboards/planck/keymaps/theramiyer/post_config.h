#ifndef IOS_DEVICE_ENABLE
    // USB_MAX_POWER_CONSUMPTION value for this keyboard
    #define USB_MAX_POWER_CONSUMPTION 400
#else
    #define USB_MAX_POWER_CONSUMPTION 100
#endif

#ifdef RGBLIGHT_ENABLE
    #ifndef IOS_DEVICE_ENABLE
        #define RGBLIGHT_LIMIT_VAL 200
        #define RGBLIGHT_VAL_STEP 17
    #else
        #define RGBLIGHT_LIMIT_VAL 35
        #define RGBLIGHT_VAL_STEP 4
    #endif
    #ifndef RGBLIGHT_HUE_STEP
        #define RGBLIGHT_HUE_STEP 10
    #endif
    #ifndef RGBLIGHT_SAT_STEP
        #define RGBLIGHT_SAT_STEP 17
    #endif
#endif
