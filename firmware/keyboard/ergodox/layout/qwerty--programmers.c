/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"

/*
Layouts definitions:
- Layer 0:           normal layer
- Layer 0 shifted:   shifted chars (and only chars)
- Layer 1:           special / extra chars, arrow-keys, movements, F's, good for programmers
- Layer 2:           Numpad
- Layer 3:           Application controls
- Layer 4:           Desktop controls
- Layer 5:           macros, signatures, combos, vim shortcuts
- Layer 6:           reverse (one hand) modes
- Layer 7:           Dead mode, for special chars only
*/

// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
          at,      caret,        parenL,    parenR,   asterisk, dblQuote,   brktL,
         tab,          q,          w,        e,         r,          t,   slash,
       ctrlL,          a,          s,        d,         f,          g,
    shL2kcap,          z,          x,        c,         v,          b,   brktR,
    lpupo6l6,   lessThan,   grtrThan,    pound,   percent,
                                                               lpupo4l4,   lpupo3l3,
                                                        del,         bs,   lpupo2l2,
                                                        esc,       altL,   lpupo1l1,
// right hand ..... ......... ......... ......... ......... ......... .........
      amp,   quote,    undersc,   braceL,   braceR,    tilde,        bkslash,
  dollar,       y,         u,        i,          o,          p,        equal,
                   h,       j,         k,        l,      colon,   lpupo7l7,
    pipe,       n,         m,    comma,     period,       dash,   shR2kcap,
                            plus,   nop,   semicol,   nop,   lpupo6l6,
       guiL,   ctrlR,
       altR,     nop,        nop,
   lpupo1l1,   enter,   space  ),

// ............................................................................

    MATRIX_LAYER(  // - Layer 1:    special / extra chars, arrow-keys, movements, F's, good for programmers
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,    braceL,
  transp,   transp,   transp,   transp,   transp,   transp,   bkslash,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,    caret,    tilde,    braceR,
  transp,   transp,   transp,   transp,   transp,
                                                            F11,      F12,
                                               transp,   transp,   transp,
                                               transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
 quote,        F6,       F7,       F8,       F9,      F10,      ins,
   amp,    transp,    pageU,     home,      end,   transp,   transp,
            arrowL,  arrowD,   arrowU,   arrowR,   transp,   transp,
transp,    transp,    pageD,   transp,   transp,   transp,   transp,
                    transp,   semicol,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : numpad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,   braceL,   braceR,    brktL,    brktR,      nop,   lpo2l2,
  transp,  semicol,    slash,     dash,        0,    colon,
  transp,        6,        7,        8,        9,     plus, lpupo3l3,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
   grave,         F6,      F7,     kpDiv,    kpMul,       F10,     num,
  lpo2l2,      caret,     kp7,       kp8,      kp9,     kpSub,   volumeU,
             bkslash,        kp4,     kp5,       kp6,    kpAdd,   volumeD,
lpupo3l3,   asterisk,     kp1,       kp2,      kp3,   kpEnter,      mute,
                             kp0,     transp,   kpDec,   kpEnter,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

