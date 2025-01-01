// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

// Mouse move
#define ZMK_POINTING_DEFAULT_MOVE_VAL 700
#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 300
#define U_MOUSE_MOVE_DELAY 0

// Mouse scroll
#define ZMK_POINTING_DEFAULT_SCRL_VAL 100
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 0
#define U_MOUSE_SCROLL_DELAY 0

// Mouse click
#define U_BTN1 &mkp LCLK
#define U_BTN2 &mkp RCLK
#define U_BTN3  &mkp MCLK
#define U_BTN4 &mkp MB4
#define U_BTN5 &mkp MB5

// Mouse move
#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_MS_U &mmv MOVE_UP

// Mouse scroll
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT
#define U_WH_U &msc SCRL_UP
