#include "dz40rgb.h"
#include "config.h"
#if defined (split_space)
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, K_13,   J_13,   L_13},
    {0, K_14,   J_14,   L_14},

    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, H_13,   G_13,   I_13},
    {0, H_14,   G_14,   I_14},

    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},
	
    {0, E_13,   D_13,   F_13},
    {0, E_14,   D_14,   F_14},

    {0, B_12,   A_12,   C_12},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_7,    A_7,    C_7},
    {0, B_6,    A_6,    C_6},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1}

};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {

    {{0|(11<<4)},   {20.36*11,  0}, 1},
    {{0|(10<<4)},   {20.36*10,  0}, 1},
    {{0|(9<<4)},    {20.36*9,  0}, 1},
    {{0|(8<<4)},    {20.36*8,  0}, 1},
    {{0|(7<<4)},    {20.36*7,  0}, 1},
	{{0|(6<<4)},    { 20.36*6,  0}, 1},
    {{0|(5<<4)},    { 20.36*5,  0}, 1},
    {{0|(4<<4)},    { 20.36*4,  0}, 1},
    {{0|(3<<4)},    { 20.36*3,  0}, 1},
    {{0|(2<<4)},    { 20.36*2,  0}, 1},
    {{0|(1<<4)},    { 20.36*1,  0}, 1},
    {{0|(0<<4)},    { 20.36*0,  0}, 1},

    {{0|(12<<4)},   {20.36*11, 21.33*0.5}, 1},
    {{0|(13<<4)},  {20.36*0,21.33*0.5}, 1},

    {{1|(11<<4)},   {20.36*11,  21.33}, 1},
    {{1|(10<<4)},   {20.36*10,  21.33}, 0},
    {{1|(9<<4)},    {20.36*9,  21.33}, 0},
    {{1|(8<<4)},    {20.36*8,  21.33}, 0},
    {{1|(7<<4)},    {20.36*7,  21.33}, 0},
	{{1|(6<<4)},    { 20.36*6,  21.33}, 0},
    {{1|(5<<4)},    { 20.36*5,  21.33}, 0},
    {{1|(4<<4)},    { 20.36*4,  21.33}, 0},
    {{1|(3<<4)},    { 20.36*3,  21.33}, 0},
    {{1|(2<<4)},    { 20.36*2,  21.33}, 0},
    {{1|(1<<4)},    { 20.36*1,  21.33}, 0},
    {{1|(0<<4)},    { 20.36*0,  21.33}, 1},

    {{1|(12<<4)},   {20.36*11, 21.33*1.5}, 1},
    {{1|(13<<4)},  {20.36*0,21.33*1.5}, 1},

    {{2|(11<<4)},   {20.36*11,  21.33*2}, 1},
    {{2|(10<<4)},   {20.36*10,  21.33*2}, 0},
    {{2|(9<<4)},    {20.36*9,  21.33*2}, 0},
    {{2|(8<<4)},    {20.36*8,  21.33*2}, 0},
    {{2|(7<<4)},    {20.36*7,  21.33*2}, 0},
	{{2|(6<<4)},    { 20.36*6,  21.33*2}, 0},
    {{2|(5<<4)},    { 20.36*5,  21.33*2}, 0},
    {{2|(4<<4)},    { 20.36*4,  21.33*2}, 0},
    {{2|(3<<4)},    { 20.36*3,  21.33*2}, 0},
    {{2|(2<<4)},    { 20.36*2,  21.33*2}, 0},
    {{2|(1<<4)},    { 20.36*1,  21.33*2}, 0},
    {{2|(0<<4)},    { 20.36*0,  21.33*2}, 1},

    {{2|(12<<4)},   {20.36*11, 21.33*2.5}, 1},
    {{2|(13<<4)},  {20.36*0,21.33*2.5}, 1},

    {{3|(11<<4)},   {20.36*11,  21.33*3}, 1},
    {{3|(10<<4)},   {20.36*10,  21.33*3}, 1},
    {{3|(9<<4)},    {20.36*9,  21.33*3}, 1},
    {{3|(8<<4)},    {20.36*8,  21.33*3}, 1},
    {{3|(7<<4)},    {20.36*7,  21.33*3}, 1},
	{{3|(6<<4)},    { 20.36*6,  21.33*3}, 1},
    {{3|(5<<4)},    { 20.36*5,  21.33*3}, 1},
    {{3|(4<<4)},    { 20.36*4,  21.33*3}, 1},
    {{3|(3<<4)},    { 20.36*3,  21.33*3}, 1},
    {{3|(2<<4)},    { 20.36*2,  21.33*3}, 1},
    {{3|(1<<4)},    { 20.36*1,  21.33*3}, 1},
    {{3|(0<<4)},    { 20.36*0,  21.33*3}, 1}

};
#else
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, K_13,   J_13,   L_13},
    {0, K_14,   J_14,   L_14},

    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, H_13,   G_13,   I_13},
    {0, H_14,   G_14,   I_14},

    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},

    {0, E_13,   D_13,   F_13},
    {0, E_14,   D_14,   F_14},

    {0, B_12,   A_12,   C_12},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_13,   A_13,   C_13},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1}

};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {

    {{0|(11<<4)},   {20.36*11,  0}, 1},
    {{0|(10<<4)},   {20.36*10,  0}, 1},
    {{0|(9<<4)},    {20.36*9,  0}, 1},
    {{0|(8<<4)},    {20.36*8,  0}, 1},
    {{0|(7<<4)},    {20.36*7,  0}, 1},
	{{0|(6<<4)},    { 20.36*6,  0}, 1},
    {{0|(5<<4)},    { 20.36*5,  0}, 1},
    {{0|(4<<4)},    { 20.36*4,  0}, 1},
    {{0|(3<<4)},    { 20.36*3,  0}, 1},
    {{0|(2<<4)},    { 20.36*2,  0}, 1},
    {{0|(1<<4)},    { 20.36*1,  0}, 1},
    {{0|(0<<4)},    { 20.36*0,  0}, 1},

    {{0|(12<<4)},   {20.36*11, 21.33*0.5}, 1},
    {{0|(13<<4)},  {20.36*0,21.33*0.5}, 1},

    {{1|(11<<4)},   {20.36*11,  21.33}, 1},
    {{1|(10<<4)},   {20.36*10,  21.33}, 0},
    {{1|(9<<4)},    {20.36*9,  21.33}, 0},
    {{1|(8<<4)},    {20.36*8,  21.33}, 0},
    {{1|(7<<4)},    {20.36*7,  21.33}, 0},
	{{1|(6<<4)},    { 20.36*6,  21.33}, 0},
    {{1|(5<<4)},    { 20.36*5,  21.33}, 0},
    {{1|(4<<4)},    { 20.36*4,  21.33}, 0},
    {{1|(3<<4)},    { 20.36*3,  21.33}, 0},
    {{1|(2<<4)},    { 20.36*2,  21.33}, 0},
    {{1|(1<<4)},    { 20.36*1,  21.33}, 0},
    {{1|(0<<4)},    { 20.36*0,  21.33}, 1},

    {{1|(12<<4)},   {20.36*11, 21.33*1.5}, 1},
    {{1|(13<<4)},  {20.36*0,21.33*1.5}, 1},

    {{2|(11<<4)},   {20.36*11,  21.33*2}, 1},
    {{2|(10<<4)},   {20.36*10,  21.33*2}, 0},
    {{2|(9<<4)},    {20.36*9,  21.33*2}, 0},
    {{2|(8<<4)},    {20.36*8,  21.33*2}, 0},
    {{2|(7<<4)},    {20.36*7,  21.33*2}, 0},
	{{2|(6<<4)},    { 20.36*6,  21.33*2}, 0},
    {{2|(5<<4)},    { 20.36*5,  21.33*2}, 0},
    {{2|(4<<4)},    { 20.36*4,  21.33*2}, 0},
    {{2|(3<<4)},    { 20.36*3,  21.33*2}, 0},
    {{2|(2<<4)},    { 20.36*2,  21.33*2}, 0},
    {{2|(1<<4)},    { 20.36*1,  21.33*2}, 0},
    {{2|(0<<4)},    { 20.36*0,  21.33*2}, 1},

    {{2|(12<<4)},   {20.36*11, 21.33*2.5}, 1},
    {{2|(13<<4)},  {20.36*0,21.33*2.5}, 1},

    {{3|(11<<4)},   {20.36*11,  21.33*3}, 1},
    {{3|(10<<4)},   {20.36*10,  21.33*3}, 1},
    {{3|(9<<4)},    {20.36*9,  21.33*3}, 1},
    {{3|(8<<4)},    {20.36*8,  21.33*3}, 1},
    {{3|(7<<4)},    {20.36*7,  21.33*3}, 1},
	{{3|(6<<4)},    { 20.36*5.5,  21.33*3}, 1},
    {{3|(4<<4)},    { 20.36*4,  21.33*3}, 1},
    {{3|(3<<4)},    { 20.36*3,  21.33*3}, 1},
    {{3|(2<<4)},    { 20.36*2,  21.33*3}, 1},
    {{3|(1<<4)},    { 20.36*1,  21.33*3}, 1},
    {{3|(0<<4)},    { 20.36*0,  21.33*3}, 1}

};
#endif

void bootmagic_lite(void)
{

    matrix_scan();
    wait_ms(10);
    matrix_scan();
    if ( ( matrix_get_row(0) & (1<<0) ) )
       {
           eeconfig_disable();
           bootloader_jump();
       }
}


void matrix_init_kb(void) {
    matrix_init_user();
}


void matrix_scan_kb(void) {
    matrix_scan_user();
}


bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    return process_record_user(keycode, record);
}


void suspend_power_down_kb(void)
{
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_kb(void)
{
    rgb_matrix_set_suspend_state(false);
}
