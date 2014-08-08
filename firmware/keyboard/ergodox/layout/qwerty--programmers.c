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
      esc,          1,          2,      3,     4,   5,   caret,
      tab,          q,          w,      e,     r,   t,   slash,
    ctrlL,          a,          s,      d,     f,   g,
 shL2kcap,          z,          x,      c,     v,   b,    pipe,
 lpupo6l6,   lessThan,   grtrThan,   nop,   altL,
                                                      esc,   lpupo5l5,
                                                       lpupo1l1,   bs,   del,
                                                       lpupo1l1,   bs,   del,
// right hand ..... ......... ......... ......... ......... ......... .........
   dblQuote,         6,       7,       8,          9,       0,   question,
     dollar,         y,       u,       i,          o,       p,     exclam,
                     h,       j,       k,          l, lpupo1l1,     colon,
    undersc,         n,       m,   comma,     period,    dash,   shR2kcap,
                            altR,   semicol,   brktL,   brktR,        nop,
        guiL,     esc,
       ctrlR,     nop,     nop,
    lpupo1l1,   enter,   space  ),

// ............................................................................

    MATRIX_LAYER(  // - Layer 1:    special / extra chars, arrow-keys, movements, F's, good for programmers
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,         F1,       F2,       F3,        F4,       F5,     grave,
  transp,         at,      amp,     plus,       nop,    quote,   bkslash,
  transp,   asterisk,      nop,   parenL,    parenR,      nop,
  transp,     braceL,   braceR,    pound,   percent,      nop,    transp,
  transp,     transp,   transp,   transp,    transp,
                                                         transp,      F11,
                                               transp,   transp,   transp,
                                               transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
    transp,       F6,       F7,         F8,       F9,      F10,   ins,
   transp,   equal,    pageU,     home,      end,   transp,   transp,
             arrowL,   arrowD,   arrowU,   arrowR,   transp,   transp,
   transp,   transp,    pageD,   transp,   transp,   transp,   transp,
                       transp,   transp,   transp,   transp,   transp,
  F12,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................


    MATRIX_LAYER(  // layer 2 : movements
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
   transp,   transp,   transp,   transp,   transp,   transp,   transp,
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
              transp,      transp,   transp,   transp,   transp,   transp,
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
                       transp,   transp,   transp,   transp,   transp,
    transp,   transp,
    transp,   transp,   transp,
    transp,   transp,   transp  ),


// ............................................................................

    MATRIX_LAYER(  // layer 3 :  applications controls
// macro, unused,
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,
                                               transp,   transp,
                                               transp,   transp,   transp,
                                               transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
              transp,      transp,   transp,   transp,   transp,   transp,
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
                           transp,   transp,   transp,   transp,   transp,
    transp,   transp,
    transp,   transp,      transp,
    transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 4 :  desktop controls
// macro, unused,
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,
                                                                 transp,      transp,
                                                       transp,      transp,      transp,
                                                       transp,      transp,      transp,
// right hand ..... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
               transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
                         transp,   transp,   transp,   transp,   transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      transp  ),


    MATRIX_LAYER(  // layer 5 :   macros, signatures, combos, vim shortcuts
// macro, unused,
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
      btldr,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,
                                                                 transp,      transp,
                                                       transp,      transp,      transp,
                                                       transp,      transp,      transp,
// right hand ..... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
               transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
                         transp,   transp,   transp,   transp,   transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      transp  ),

// ............................................................................
    MATRIX_LAYER(  // layer 6 :  reverse (one hand) mode
// macro, unused,
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,        p,        o,        i,        u,        y,    space,
     transp,   transp,        l,        k,        j,        h,
     transp,   transp,   transp,   transp,        n,        m,    enter,
     transp,   transp,   transp,   transp,   transp,
                                                        transp,   transp,
                                               transp,   transp,   transp,
                                               transp,    enter,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
               transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
                         transp,   transp,   transp,   transp,   transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      transp  ),

// ............................................................................
    MATRIX_LAYER(  // layer 7 :  Dead mode, for special keys
// macro, unused,
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,
                                                                    transp,      transp,
                                                       transp,      transp,      transp,
                                                       transp,      transp,      transp,
// right hand ..... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
               transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
                         transp,   transp,   transp,   transp,   transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      transp  ),

// ............................................................................
// ............................................................................
};

