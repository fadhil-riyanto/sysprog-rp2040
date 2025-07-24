/* this is constatnts
 * that will be used later
 */

.equ LED_PIN,      25
.equ GPIO_DIR_IN,  0
.equ GPIO_DIR_OUT, 1
.equ PIN_HIGH,     1
.equ PIN_LOW,      0

.syntax unified                 /* arm spesific syntax */

.thumb_func
.global main

main:
init: 
        b       jump_here

jump_here:
        movs r0, #0
        bx lr