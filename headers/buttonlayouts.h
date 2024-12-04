#ifndef BUTTONLAYOUTS_H_
#define BUTTONLAYOUTS_H_

#include "config.pb.h"
#include "enums.pb.h"

#define BUTTON_GROUP_ARCADE_STICK                         \
    {                                                     \
        {                                                 \
            GP_ELEMENT_LEVER, { 17, 37, 10, 10, 1, 0, 0 } \
        }                                                 \
    }
#define BUTTON_GROUP_VLXA                               \
    {                                                   \
        {                                               \
            GP_ELEMENT_LEVER, { 15, 36, 8, 8, 1, 0, 0 } \
        }                                               \
    }
#define BUTTON_GROUP_FIGHTBOARD_STICK                     \
    {                                                     \
        {                                                 \
            GP_ELEMENT_LEVER, { 27, 31, 10, 10, 1, 0, 0 } \
        }                                                 \
    }
#define BUTTON_GROUP_FIGHTBOARD_STICK_MIRRORED            \
    {                                                     \
        {                                                 \
            GP_ELEMENT_LEVER, { 99, 31, 10, 10, 1, 0, 0 } \
        }                                                 \
    }
#define BUTTON_GROUP_TWINSTICK_A                          \
    {                                                     \
        {                                                 \
            GP_ELEMENT_LEVER, { 17, 37, 10, 10, 1, 0, 0 } \
        }                                                 \
    }
#define BUTTON_GROUP_TWINSTICK_B                           \
    {                                                      \
        {                                                  \
            GP_ELEMENT_LEVER, { 109, 37, 10, 10, 1, 0, 0 } \
        }                                                  \
    }

#define BUTTON_GROUP_STICKLESS                                                               \
    {                                                                                        \
        {GP_ELEMENT_DIR_BUTTON, {15, 23, 4, 4, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},  \
        {GP_ELEMENT_DIR_BUTTON, {25, 22, 4, 4, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
        {GP_ELEMENT_DIR_BUTTON, {35, 27, 4, 4, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
        {GP_ELEMENT_DIR_BUTTON, {38, 52, 4, 4, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
        {GP_ELEMENT_BTN_BUTTON, {64, 27, 4, 4, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}},    \
    }

#define BUTTON_GROUP_WASD_BOX                                                                    \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {8, 39, 18, 49, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_SQUARE}},      \
            {GP_ELEMENT_DIR_BUTTON, {19, 39, 29, 49, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_DIR_BUTTON, {19, 28, 29, 38, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE}},   \
        {                                                                                        \
            GP_ELEMENT_DIR_BUTTON, { 30, 39, 40, 49, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE } \
        }                                                                                        \
    }

#define BUTTON_GROUP_UDLR                                                                       \
    {                                                                                           \
        {GP_ELEMENT_DIR_BUTTON, {8, 36, 7, 7, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_DIR_BUTTON, {25, 42, 7, 7, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_DIR_BUTTON, {33, 25, 7, 7, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},   \
        {                                                                                       \
            GP_ELEMENT_DIR_BUTTON, { 42, 49, 7, 7, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE } \
        }                                                                                       \
    }

#define BUTTON_GROUP_FIGHTBOARD_MIRRORED                                                      \
    {                                                                                         \
        {GP_ELEMENT_BTN_BUTTON, {9, 18, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {25, 18, 7, 7, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {41, 18, 7, 7, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {57, 27, 7, 7, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {9, 34, 7, 7, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {25, 34, 7, 7, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {41, 34, 7, 7, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {57, 42, 7, 7, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {8, 46, 3, 3, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {17, 46, 3, 3, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {26, 46, 3, 3, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {34, 46, 3, 3, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                     \
            GP_ELEMENT_BTN_BUTTON, { 44, 46, 3, 3, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE }  \
        }                                                                                     \
    }

#define BUTTON_GROUP_MAME_A                                                                     \
    {                                                                                           \
        {GP_ELEMENT_DIR_BUTTON, {8, 37, 7, 7, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_DIR_BUTTON, {23, 24, 7, 7, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},   \
            {GP_ELEMENT_DIR_BUTTON, {23, 50, 7, 7, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}}, \
        {                                                                                       \
            GP_ELEMENT_DIR_BUTTON, { 37, 37, 7, 7, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE } \
        }                                                                                       \
    }

#define BUTTON_GROUP_MAME_B                                                                     \
    {                                                                                           \
        {GP_ELEMENT_BTN_BUTTON, {68, 28, 78, 38, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},      \
            {GP_ELEMENT_BTN_BUTTON, {79, 28, 89, 38, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_BTN_BUTTON, {90, 28, 100, 38, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_BTN_BUTTON, {68, 39, 78, 49, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_BTN_BUTTON, {79, 39, 89, 49, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},  \
        {                                                                                       \
            GP_ELEMENT_BTN_BUTTON, { 90, 39, 100, 49, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE }  \
        }                                                                                       \
    }

#define BUTTON_GROUP_MAME_8B                                                                     \
    {                                                                                            \
        {GP_ELEMENT_BTN_BUTTON, {68, 28, 78, 38, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},       \
            {GP_ELEMENT_BTN_BUTTON, {79, 25, 89, 35, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE}},   \
            {GP_ELEMENT_BTN_BUTTON, {90, 25, 100, 35, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_BTN_BUTTON, {101, 28, 111, 38, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_BTN_BUTTON, {68, 39, 78, 49, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}},   \
            {GP_ELEMENT_BTN_BUTTON, {79, 36, 89, 46, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},   \
            {GP_ELEMENT_BTN_BUTTON, {90, 36, 100, 46, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE}},  \
        {                                                                                        \
            GP_ELEMENT_BTN_BUTTON, { 101, 39, 111, 49, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_SQUARE }  \
        }                                                                                        \
    }

#define BUTTON_GROUP_OPEN_CORE_WASD_A                                                             \
    {                                                                                             \
        {GP_ELEMENT_DIR_BUTTON, {16, 39, 26, 49, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_SQUARE}},      \
            {GP_ELEMENT_DIR_BUTTON, {27, 39, 37, 49, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_DIR_BUTTON, {27, 28, 37, 38, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE}},    \
            {GP_ELEMENT_DIR_BUTTON, {38, 39, 48, 49, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_BTN_BUTTON, {6, 19, 3, 3, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {14, 19, 3, 3, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {23, 19, 3, 3, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {31, 19, 3, 3, 1, 1, GAMEPAD_MASK_A2, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {39, 19, 3, 3, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},     \
        {                                                                                         \
            GP_ELEMENT_BTN_BUTTON, { 47, 19, 3, 3, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE }      \
        }                                                                                         \
    }

#define BUTTON_GROUP_OPEN_CORE_WASD_B                                                            \
    {                                                                                            \
        {GP_ELEMENT_BTN_BUTTON, {68, 28, 78, 38, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},       \
            {GP_ELEMENT_BTN_BUTTON, {79, 25, 89, 35, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE}},   \
            {GP_ELEMENT_BTN_BUTTON, {90, 25, 100, 35, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_BTN_BUTTON, {101, 28, 111, 38, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_BTN_BUTTON, {68, 39, 78, 49, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}},   \
            {GP_ELEMENT_BTN_BUTTON, {79, 36, 89, 46, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},   \
            {GP_ELEMENT_BTN_BUTTON, {90, 36, 100, 46, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE}},  \
        {                                                                                        \
            GP_ELEMENT_BTN_BUTTON, { 101, 39, 111, 49, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_SQUARE }  \
        }                                                                                        \
    }

#define BUTTON_GROUP_KEYBOARD_ANGLED                                                                 \
    {                                                                                                \
        {GP_ELEMENT_DIR_BUTTON, {8, 37, 16, 45, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_SQUARE, 45}},      \
            {GP_ELEMENT_DIR_BUTTON, {23, 24, 31, 32, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE, 45}},   \
            {GP_ELEMENT_DIR_BUTTON, {23, 50, 31, 58, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE, 45}}, \
        {                                                                                            \
            GP_ELEMENT_DIR_BUTTON, { 37, 37, 45, 45, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE, 45 } \
        }                                                                                            \
    }

#define BUTTON_GROUP_VEWLIX                                                                    \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {57, 31, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {75, 24, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 24, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {111, 24, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {51, 49, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {69, 42, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {87, 42, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 105, 42, 8, 8, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_VLXB                                                                     \
    {                                                                                         \
        {GP_ELEMENT_BTN_BUTTON, {50, 31, 7, 7, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {66, 24, 7, 7, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {82, 24, 7, 7, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {98, 24, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {45, 47, 7, 7, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {61, 40, 7, 7, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {77, 40, 7, 7, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {93, 40, 7, 7, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                     \
            GP_ELEMENT_BTN_BUTTON, { 119, 33, 5, 5, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE } \
        }                                                                                     \
    }

#define BUTTON_GROUP_FIGHTBOARD                                                                \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {69, 27, 7, 7, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {86, 18, 7, 7, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {103, 18, 7, 7, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {120, 18, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {69, 43, 7, 7, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {86, 35, 7, 7, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {103, 35, 7, 7, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {120, 35, 7, 7, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {84, 47, 3, 3, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {94, 47, 3, 3, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {103, 47, 3, 3, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {112, 47, 3, 3, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 122, 47, 3, 3, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_VEWLIX7                                                                   \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {57, 31, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {75, 24, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 24, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {111, 24, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {51, 49, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {69, 42, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 87, 42, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE }   \
        }                                                                                      \
    }

#define BUTTON_GROUP_SEGA_2P                                                                   \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {57, 34, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {75, 24, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 24, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {111, 28, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {57, 52, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {75, 42, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 42, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 111, 46, 8, 8, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_NOIR8                                                                     \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {57, 33, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {75, 24, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 24, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {111, 28, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {57, 51, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {75, 42, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 42, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 111, 46, 8, 8, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_CAPCOM                                                                    \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {64, 28, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {82, 28, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {100, 28, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {118, 28, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {64, 46, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {82, 46, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {100, 46, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 118, 46, 8, 8, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_CAPCOM6                                                                   \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {74, 28, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {92, 28, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {110, 28, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {74, 46, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {92, 46, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 110, 46, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_STICKLESS_BUTTONS                                                         \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {93, 27, 4, 4, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {93, 17, 4, 4, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {103, 13, 4, 4, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {113, 14, 4, 4, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {122, 19, 4, 4, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {102, 23, 4, 4, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {82, 46, 4, 4, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {90, 40, 4, 4, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {93, 27, 4, 4, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 82, 46, 4, 4, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE }   \
        }                                                                                      \
    }

#define BUTTON_GROUP_WASD_BUTTONS                                                              \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {93, 27, 4, 4, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {93, 17, 4, 4, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {103, 13, 4, 4, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {113, 14, 4, 4, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {122, 19, 4, 4, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {102, 23, 4, 4, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {82, 46, 4, 4, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 82, 46, 4, 4, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE }   \
        }                                                                                      \
    }

#define BUTTON_GROUP_ARCADE_BUTTONS                                                            \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {64, 28, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {82, 24, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {100, 24, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {118, 28, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {59, 46, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {77, 42, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {95, 42, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 113, 46, 8, 8, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_STICKLESS13A                                                                \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {39, 15, 6, 6, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},        \
            {GP_ELEMENT_DIR_BUTTON, {18, 27, 6, 6, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {32, 27, 6, 6, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {44, 34, 6, 6, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_DIR_BUTTON, {49, 53, 6, 6, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {65, 13, 2, 2, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {72, 13, 2, 2, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {79, 13, 2, 2, 1, 1, GAMEPAD_MASK_A2, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {86, 13, 2, 2, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {93, 13, 2, 2, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},    \
        {                                                                                        \
            GP_ELEMENT_BTN_BUTTON, { 100, 13, 2, 2, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE }    \
        }                                                                                        \
    }

#define BUTTON_GROUP_STICKLESS_BUTTONS13B                                                     \
    {                                                                                         \
        {GP_ELEMENT_BTN_BUTTON, {56, 27, 6, 6, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {70, 24, 6, 6, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {84, 24, 6, 6, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {98, 27, 6, 6, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {56, 41, 6, 6, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {70, 38, 6, 6, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {84, 38, 6, 6, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                     \
            GP_ELEMENT_BTN_BUTTON, { 98, 41, 6, 6, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                     \
    }

#define BUTTON_GROUP_STICKLESS16A                                                                \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {47, 19, 4, 4, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},        \
            {GP_ELEMENT_DIR_BUTTON, {32, 27, 4, 4, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {42, 27, 4, 4, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {50, 32, 4, 4, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_DIR_BUTTON, {52, 47, 4, 4, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {64, 17, 4, 4, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {42, 45, 4, 4, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {66, 45, 4, 4, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {77, 15, 2, 2, 1, 1, GAMEPAD_MASK_A2, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {82, 15, 2, 2, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {87, 15, 2, 2, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},    \
        {                                                                                        \
            GP_ELEMENT_BTN_BUTTON, { 92, 15, 2, 2, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE }     \
        }                                                                                        \
    }

#define BUTTON_GROUP_STICKLESS_BUTTONS16B                                                     \
    {                                                                                         \
        {GP_ELEMENT_BTN_BUTTON, {59, 27, 4, 4, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {69, 25, 4, 4, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {79, 25, 4, 4, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {89, 27, 4, 4, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {59, 37, 4, 4, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {69, 35, 4, 4, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {79, 35, 4, 4, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                     \
            GP_ELEMENT_BTN_BUTTON, { 89, 37, 4, 4, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                     \
    }

#define BUTTON_GROUP_STICKLESSR16A                                                               \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {47, 19, 4, 4, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},        \
            {GP_ELEMENT_DIR_BUTTON, {32, 27, 4, 4, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {42, 27, 4, 4, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {50, 32, 4, 4, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_DIR_BUTTON, {52, 47, 4, 4, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {64, 17, 4, 4, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {22, 30, 4, 4, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {66, 45, 4, 4, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {77, 15, 2, 2, 1, 1, GAMEPAD_MASK_A2, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {82, 15, 2, 2, 1, 1, GAMEPAD_MASK_A1, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {87, 15, 2, 2, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},    \
        {                                                                                        \
            GP_ELEMENT_BTN_BUTTON, { 92, 15, 2, 2, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE }     \
        }                                                                                        \
    }

#define BUTTON_GROUP_STICKLESS_BUTTONSR16B                                                    \
    {                                                                                         \
        {GP_ELEMENT_BTN_BUTTON, {59, 27, 4, 4, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {69, 25, 4, 4, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {79, 25, 4, 4, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {89, 27, 4, 4, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {59, 37, 4, 4, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {69, 35, 4, 4, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {79, 35, 4, 4, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                     \
            GP_ELEMENT_BTN_BUTTON, { 89, 37, 4, 4, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                     \
    }

#define BUTTON_GROUP_STICKLESS14A                                                                \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {26, 20, 7, 7, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_DIR_BUTTON, {42, 20, 7, 7, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {56, 28, 7, 7, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_DIR_BUTTON, {62, 50, 7, 7, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
            {GP_ELEMENT_BTN_BUTTON, {10, 22, 7, 7, 1, 1, GAMEPAD_MASK_L3, GP_SHAPE_ELLIPSE}},    \
        {                                                                                        \
            GP_ELEMENT_BTN_BUTTON, { 84, 50, 7, 7, 1, 1, GAMEPAD_MASK_R3, GP_SHAPE_ELLIPSE }     \
        }                                                                                        \
    }

#define BUTTON_GROUP_STICKLESS_BUTTONS14B                                                      \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {70, 20, 7, 7, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {86, 16, 7, 7, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {102, 16, 7, 7, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {118, 20, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {70, 36, 7, 7, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {86, 32, 7, 7, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {102, 32, 7, 7, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}}, \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 118, 36, 7, 7, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_DANCEPAD_A                                                                  \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {39, 29, 54, 44, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_SQUARE}},     \
            {GP_ELEMENT_DIR_BUTTON, {56, 46, 71, 61, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_DIR_BUTTON, {56, 12, 71, 27, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE}},   \
        {                                                                                        \
            GP_ELEMENT_DIR_BUTTON, { 73, 29, 88, 44, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE } \
        }                                                                                        \
    }

#define BUTTON_GROUP_DANCEPAD_B                                                                \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {39, 12, 54, 27, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},     \
            {GP_ELEMENT_BTN_BUTTON, {39, 46, 54, 61, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_BTN_BUTTON, {73, 12, 88, 27, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}}, \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 73, 46, 88, 61, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE }  \
        }                                                                                      \
    }

#define BUTTON_GROUP_DANCEPAD_DDR_LEFT                                                           \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {9, 29, 24, 44, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_SQUARE}},      \
            {GP_ELEMENT_DIR_BUTTON, {26, 46, 41, 61, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_DIR_BUTTON, {26, 12, 41, 27, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE}},   \
        {                                                                                        \
            GP_ELEMENT_DIR_BUTTON, { 43, 29, 58, 44, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE } \
        }                                                                                        \
    }

#define BUTTON_GROUP_DANCEPAD_DDR_SOLO                                                            \
    {                                                                                             \
        {GP_ELEMENT_BTN_BUTTON, {39, 12, 54, 27, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},        \
            {GP_ELEMENT_DIR_BUTTON, {39, 29, 54, 44, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_DIR_BUTTON, {56, 46, 71, 61, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE}},  \
            {GP_ELEMENT_DIR_BUTTON, {56, 12, 71, 27, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE}},    \
            {GP_ELEMENT_DIR_BUTTON, {73, 29, 88, 44, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE}}, \
        {                                                                                         \
            GP_ELEMENT_BTN_BUTTON, { 73, 12, 88, 27, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE }     \
        }                                                                                         \
    }

#define BUTTON_GROUP_DANCEPAD_PIU_LEFT {                                               \
    {GP_ELEMENT_BTN_BUTTON, {39, 12, 54, 27, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {39, 46, 54, 61, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {73, 12, 88, 27, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {73, 46, 88, 61, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {56, 29, 71, 44, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}}, \
}

#define BUTTON_GROUP_POPN_A                                                                   \
    {                                                                                         \
        {GP_ELEMENT_BTN_BUTTON, {14, 50, 8, 8, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},     \
            {GP_ELEMENT_BTN_BUTTON, {26, 35, 8, 8, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {39, 50, 8, 8, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}}, \
        {                                                                                     \
            GP_ELEMENT_BTN_BUTTON, { 52, 35, 8, 8, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE }  \
        }                                                                                     \
    }

#define BUTTON_GROUP_TAIKO_A {                                                                  \
    {GP_ELEMENT_BTN_BUTTON, {60, 32, 22, 22, 1, 2, GAMEPAD_MASK_B3, GP_SHAPE_ARC, 90, 270, 1}}, \
    {GP_ELEMENT_BTN_BUTTON, {60, 32, 18, 18, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ARC, 90, 270, 1}}, \
}

#define BUTTON_GROUP_BM_TURNTABLE_A {                                                       \
    {GP_ELEMENT_SHAPE, {29, 34, 18, 18, 1, 0, 0, GP_SHAPE_ELLIPSE}},                        \
    {GP_ELEMENT_SHAPE, {29, 34, 2, 2, 1, 0, 0, GP_SHAPE_ELLIPSE}},                          \
    {GP_ELEMENT_DIR_BUTTON, {19, 31, 4, 3, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_POLYGON, 13}},   \
    {GP_ELEMENT_DIR_BUTTON, {19, 37, 4, 3, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_POLYGON, 10}}, \
    {GP_ELEMENT_DIR_BUTTON, {37, 31, 4, 3, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_POLYGON, 13}}, \
    {GP_ELEMENT_DIR_BUTTON, {37, 37, 4, 3, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_POLYGON, 10}},   \
}

#define BUTTON_GROUP_BM_5KEY_A {                                                       \
    {GP_ELEMENT_BTN_BUTTON, {7, 37, 19, 56, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},  \
    {GP_ELEMENT_BTN_BUTTON, {15, 13, 27, 32, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {24, 37, 36, 56, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {33, 13, 44, 32, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {41, 37, 53, 56, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}}, \
}

#define BUTTON_GROUP_BM_7KEY_A {                                                          \
    {GP_ELEMENT_BTN_BUTTON, {7, 37, 19, 56, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},     \
    {GP_ELEMENT_BTN_BUTTON, {15, 13, 27, 32, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}},    \
    {GP_ELEMENT_BTN_BUTTON, {24, 37, 36, 56, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}},    \
    {GP_ELEMENT_BTN_BUTTON, {33, 13, 44, 32, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}},    \
    {GP_ELEMENT_BTN_BUTTON, {41, 37, 53, 56, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},    \
    {GP_ELEMENT_BTN_BUTTON, {50, 13, 62, 32, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE}},    \
    {GP_ELEMENT_DIR_BUTTON, {58, 37, 70, 56, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE}}, \
}

#define BUTTON_GROUP_GITADORA_FRET_A {                                                          \
    {GP_ELEMENT_BTN_BUTTON, {6, 26, 19, 44, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE, 0, 0, 0}},  \
    {GP_ELEMENT_BTN_BUTTON, {12, 26, 7, 7, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ARC, 180, 360, 0}},  \
    {GP_ELEMENT_BTN_BUTTON, {25, 26, 38, 44, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {31, 26, 7, 7, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ARC, 180, 360, 0}},  \
    {GP_ELEMENT_BTN_BUTTON, {44, 26, 57, 44, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {50, 26, 7, 7, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ARC, 180, 360, 0}},  \
}

#define BUTTON_GROUP_GITADORA_STRUM_A {                                                           \
    {GP_ELEMENT_DIR_BUTTON, {18, 26, 52, 30, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_DIR_BUTTON, {18, 32, 52, 36, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE, 0, 0, 0}},   \
}

#define BUTTON_GROUP_BANDHERO_FRET_A {                                                          \
    {GP_ELEMENT_BTN_BUTTON, {5, 26, 14, 36, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE, 0, 0, 0}},  \
    {GP_ELEMENT_BTN_BUTTON, {18, 26, 27, 36, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {31, 26, 40, 36, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {44, 26, 53, 36, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {57, 26, 66, 36, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_SQUARE, 0, 0, 0}}, \
}

#define BUTTON_GROUP_BANDHERO_STRUM_A {                                                           \
    {GP_ELEMENT_DIR_BUTTON, {21, 27, 45, 30, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_DIR_BUTTON, {21, 32, 45, 35, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE, 0, 0, 0}},   \
    {GP_ELEMENT_LEVER, {54, 16, 5, 5, 1, 0, 0, 0}},                                               \
    {GP_ELEMENT_BTN_BUTTON, {14, 44, 4, 4, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},             \
    {GP_ELEMENT_BTN_BUTTON, {6, 50, 4, 4, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}},              \
}

#define BUTTON_GROUP_DANCEPAD_DDR_RIGHT                                                         \
    {                                                                                           \
        {GP_ELEMENT_BTN_BUTTON, {69, 29, 84, 44, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},      \
            {GP_ELEMENT_BTN_BUTTON, {86, 46, 101, 61, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}}, \
            {GP_ELEMENT_BTN_BUTTON, {86, 12, 101, 27, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE}}, \
        {                                                                                       \
            GP_ELEMENT_BTN_BUTTON, { 103, 29, 118, 44, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE } \
        }                                                                                       \
    }

#define BUTTON_GROUP_DANCEPAD_PIU_RIGHT {                                              \
    {GP_ELEMENT_BTN_BUTTON, {39, 12, 54, 27, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {39, 46, 54, 61, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {73, 12, 88, 27, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {73, 46, 88, 61, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE}}, \
    {GP_ELEMENT_BTN_BUTTON, {56, 29, 71, 44, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}}, \
}

#define BUTTON_GROUP_POPN_B {                                                          \
    {GP_ELEMENT_BTN_BUTTON, {66, 50, 8, 8, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}},  \
    {GP_ELEMENT_BTN_BUTTON, {77, 35, 8, 8, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},  \
    {GP_ELEMENT_BTN_BUTTON, {90, 50, 8, 8, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
    {GP_ELEMENT_DIR_BUTTON, {104, 35, 8, 8, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_BTN_BUTTON, {116, 50, 8, 8, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}}, \
}

#define BUTTON_GROUP_TAIKO_B {                                                                   \
    {GP_ELEMENT_BTN_BUTTON, {68, 32, 22, 22, 1, 2, GAMEPAD_MASK_B4, GP_SHAPE_ARC, 270, 450, 1}}, \
    {GP_ELEMENT_BTN_BUTTON, {68, 32, 18, 18, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ARC, 270, 450, 1}}, \
}

#define BUTTON_GROUP_BM_TURNTABLE_B {                                                        \
    {GP_ELEMENT_SHAPE, {102, 34, 18, 18, 1, 0, 0, GP_SHAPE_ELLIPSE}},                        \
    {GP_ELEMENT_SHAPE, {102, 34, 2, 2, 1, 0, 0, GP_SHAPE_ELLIPSE}},                          \
    {GP_ELEMENT_DIR_BUTTON, {92, 31, 4, 3, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_POLYGON, 13}},    \
    {GP_ELEMENT_DIR_BUTTON, {92, 37, 4, 3, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_POLYGON, 10}},  \
    {GP_ELEMENT_DIR_BUTTON, {110, 31, 4, 3, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_POLYGON, 13}}, \
    {GP_ELEMENT_DIR_BUTTON, {110, 37, 4, 3, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_POLYGON, 10}},   \
}

#define BUTTON_GROUP_BM_5KEY_B {                                                        \
    {GP_ELEMENT_BTN_BUTTON, {57, 37, 69, 56, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},  \
    {GP_ELEMENT_BTN_BUTTON, {65, 13, 77, 32, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}},  \
    {GP_ELEMENT_BTN_BUTTON, {74, 37, 86, 56, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}},  \
    {GP_ELEMENT_BTN_BUTTON, {82, 13, 94, 32, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}},  \
    {GP_ELEMENT_BTN_BUTTON, {91, 37, 103, 56, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}}, \
}

#define BUTTON_GROUP_BM_7KEY_B {                                                            \
    {GP_ELEMENT_BTN_BUTTON, {57, 37, 69, 56, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE}},      \
    {GP_ELEMENT_BTN_BUTTON, {65, 13, 77, 32, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_SQUARE}},      \
    {GP_ELEMENT_BTN_BUTTON, {74, 37, 86, 56, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE}},      \
    {GP_ELEMENT_BTN_BUTTON, {82, 13, 94, 32, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_SQUARE}},      \
    {GP_ELEMENT_BTN_BUTTON, {91, 37, 103, 56, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE}},     \
    {GP_ELEMENT_BTN_BUTTON, {100, 13, 112, 32, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_SQUARE}},    \
    {GP_ELEMENT_DIR_BUTTON, {108, 37, 120, 56, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_SQUARE}}, \
}

#define BUTTON_GROUP_GITADORA_FRET_B {                                                            \
    {GP_ELEMENT_BTN_BUTTON, {108, 26, 121, 44, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {114, 26, 7, 7, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ARC, 180, 360, 0}},   \
    {GP_ELEMENT_BTN_BUTTON, {89, 26, 102, 44, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE, 0, 0, 0}},  \
    {GP_ELEMENT_BTN_BUTTON, {95, 26, 7, 7, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ARC, 180, 360, 0}},    \
    {GP_ELEMENT_BTN_BUTTON, {70, 26, 83, 44, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE, 0, 0, 0}},   \
    {GP_ELEMENT_BTN_BUTTON, {76, 26, 7, 7, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ARC, 180, 360, 0}},    \
}

#define BUTTON_GROUP_GITADORA_STRUM_B {                                                            \
    {GP_ELEMENT_DIR_BUTTON, {75, 26, 109, 30, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_DIR_BUTTON, {75, 32, 109, 36, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE, 0, 0, 0}},   \
}

#define BUTTON_GROUP_BANDHERO_FRET_B {                                                            \
    {GP_ELEMENT_BTN_BUTTON, {113, 26, 122, 36, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {100, 26, 109, 36, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_BTN_BUTTON, {87, 26, 96, 36, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_SQUARE, 0, 0, 0}},   \
    {GP_ELEMENT_BTN_BUTTON, {74, 26, 83, 36, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_SQUARE, 0, 0, 0}},   \
    {GP_ELEMENT_BTN_BUTTON, {61, 26, 70, 36, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_SQUARE, 0, 0, 0}},   \
}

#define BUTTON_GROUP_BANDHERO_STRUM_B {                                                            \
    {GP_ELEMENT_DIR_BUTTON, {75, 26, 109, 30, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_SQUARE, 0, 0, 0}}, \
    {GP_ELEMENT_DIR_BUTTON, {75, 32, 109, 36, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_SQUARE, 0, 0, 0}},   \
    {GP_ELEMENT_LEVER, {72, 16, 5, 5, 1, 0, 0, 0}},                                                \
    {GP_ELEMENT_BTN_BUTTON, {113, 44, 4, 4, 1, 1, GAMEPAD_MASK_S1, GP_SHAPE_ELLIPSE}},             \
    {GP_ELEMENT_BTN_BUTTON, {120, 50, 4, 4, 1, 1, GAMEPAD_MASK_S2, GP_SHAPE_ELLIPSE}},             \
}

#define BUTTON_GROUP_6GAWD_A                              \
    {                                                     \
        {                                                 \
            GP_ELEMENT_LEVER, { 22, 30, 10, 10, 1, 0, 0 } \
        }                                                 \
    }

#define BUTTON_GROUP_6GAWD_B                                                                   \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {69, 25, 6, 6, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {81, 16, 6, 6, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {95, 16, 6, 6, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {109, 24, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {69, 43, 6, 6, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {81, 34, 6, 6, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {95, 34, 6, 6, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 58, 53, 7, 7, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }   \
        }                                                                                      \
    }

#define BUTTON_GROUP_6GAWD_ALLBUTTON_A                                                           \
    {                                                                                            \
        {GP_ELEMENT_DIR_BUTTON, {22, 28, 6, 6, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_DIR_BUTTON, {40, 28, 6, 6, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_DIR_BUTTON, {56, 32, 6, 6, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
        {                                                                                        \
            GP_ELEMENT_DIR_BUTTON, { 58, 53, 7, 7, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE }     \
        }                                                                                        \
    }

#define BUTTON_GROUP_6GAWD_ALLBUTTON_B                                                         \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {69, 25, 6, 6, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {81, 16, 6, 6, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {95, 16, 6, 6, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {109, 24, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {69, 43, 6, 6, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {81, 34, 6, 6, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {95, 34, 6, 6, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 80, 53, 7, 7, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE }   \
        }                                                                                      \
    }

#define BUTTON_GROUP_6GAWD_ALLBUTTONPLUS_A {                                             \
    {GP_ELEMENT_BTN_BUTTON, {12, 32, 6, 6, 1, 1, GAMEPAD_MASK_L2, GP_SHAPE_ELLIPSE}},    \
    {GP_ELEMENT_DIR_BUTTON, {26, 28, 6, 6, 1, 1, GAMEPAD_MASK_LEFT, GP_SHAPE_ELLIPSE}},  \
    {GP_ELEMENT_DIR_BUTTON, {40, 28, 6, 6, 1, 1, GAMEPAD_MASK_DOWN, GP_SHAPE_ELLIPSE}},  \
    {GP_ELEMENT_DIR_BUTTON, {54, 33, 6, 6, 1, 1, GAMEPAD_MASK_RIGHT, GP_SHAPE_ELLIPSE}}, \
    {GP_ELEMENT_DIR_BUTTON, {58, 53, 7, 7, 1, 1, GAMEPAD_MASK_UP, GP_SHAPE_ELLIPSE}},    \
}

#define BUTTON_GROUP_6GAWD_ALLBUTTONPLUS_B                                                     \
    {                                                                                          \
        {GP_ELEMENT_BTN_BUTTON, {69, 25, 6, 6, 1, 1, GAMEPAD_MASK_B3, GP_SHAPE_ELLIPSE}},      \
            {GP_ELEMENT_BTN_BUTTON, {81, 16, 6, 6, 1, 1, GAMEPAD_MASK_B4, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {95, 16, 6, 6, 1, 1, GAMEPAD_MASK_R1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {109, 24, 7, 7, 1, 1, GAMEPAD_MASK_L1, GP_SHAPE_ELLIPSE}}, \
            {GP_ELEMENT_BTN_BUTTON, {69, 43, 6, 6, 1, 1, GAMEPAD_MASK_B1, GP_SHAPE_ELLIPSE}},  \
            {GP_ELEMENT_BTN_BUTTON, {81, 34, 6, 6, 1, 1, GAMEPAD_MASK_B2, GP_SHAPE_ELLIPSE}},  \
        {                                                                                      \
            GP_ELEMENT_BTN_BUTTON, { 95, 34, 6, 6, 1, 1, GAMEPAD_MASK_R2, GP_SHAPE_ELLIPSE }   \
        }                                                                                      \
    }

#endif
