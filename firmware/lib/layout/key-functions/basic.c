/* ----------------------------------------------------------------------------
 * Copyright (c) 2012, 2013 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Implements the "basic" section of "../key-functions.h"
 */


#include <stdbool.h>
#include <stdint.h>
#include "../../../../firmware/lib/usb.h"
#include "../../../../firmware/lib/usb/usage-page/keyboard.h"
#include "../key-functions.h"
#include <util/delay.h>


// ----------------------------------------------------------------------------

void key_functions__press(uint8_t keycode) {
	kb__led__on(1);
	_delay_ms(10);
	kb__led__off(1);
	/*kb__led__on(2);*/
	/*_delay_ms(50);*/
	/*kb__led__off(2);*/
	/*kb__led__on(3);*/
	/*_delay_ms(50);*/
	/*kb__led__off(3);*/
    usb__kb__set_key(true, keycode);
}

void key_functions__release(uint8_t keycode) {
    usb__kb__set_key(false, keycode);
}

void key_functions__toggle(uint8_t keycode) {
    if (usb__kb__read_key(keycode))
        usb__kb__set_key(false, keycode);
    else
        usb__kb__set_key(true, keycode);
}

