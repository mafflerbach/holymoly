#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         holymoly
#define DESCRIPTION     The holymoly keyboard 

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS {B4,E6,D7,C6,D4}
#define MATRIX_ROW_PINS_RIGHT {B4,E6,D7,C6,D4}
//#define MATRIX_ROW_PINS {D4,C6,D7,E6,B4}
//#define MATRIX_ROW_PINS_RIGHT {D4,C6,D7,E6,B4}

//#define MATRIX_COL_PINS {F4,F5,F6,F7,B1,B3,B2}
//#define MATRIX_COL_PINS_RIGHT {F4,F5,F6,F7,B1,B3,B2}
#define MATRIX_COL_PINS {B2,B3,B1,F7,F6,F5,F4}
#define MATRIX_COL_PINS_RIGHT {B2,B3,B1,F7,F6,F5,F4}

//#define SPLIT_HAND_PIN D3
#define UNUSED_PINS
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define MASTER_LEFT
/* number of backlight levels */


/* Set 0 if debouncing isn't needed */
//#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
//#define PREVENT_STUCK_MODIFIERS
#define USE_I2C
#define EE_HANDS
#define RGBLIGHT_SPLIT
#define SPLIT_HAND_PIN D3
#define RGB_DI_PIN D2
// The number of LEDs connected
#define DRIVER_LED_TOTAL 70
#define RGBLED_SPLIT  { 35, 35 }

#endif
