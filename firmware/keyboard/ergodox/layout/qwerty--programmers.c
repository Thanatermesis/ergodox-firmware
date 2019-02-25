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
- Layer 2:           Extra special chars
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
      esc,          1,          2,      3,     4,   5,  caret,
      tab,          q,          w,      e,     r,   t,  slash,
    ctrlL,          a,          s,      d,     f,   g,
 shL2kcap,          z,          x,      c,     v,   b,    lpupo3l3,
 lpupo6l6,   lessThan,   grtrThan,  tilde,  altL,
                                                                 lpupo2l2,    lpupo7l7,
                                                     lpupo1l1,   bs,          lpupo5l5,
                                                     lpupo1l1,   bs,          del,
// right hand ..... ......... ......... ......... ......... ......... .........
      equal,         6,       7,       8,          9,       0,   question,
        esc,         y,       u,       i,          o,       p,     exclam,
                     h,       j,       k,          l, lpupo2l1,    colon,
    undersc,         n,       m,   comma,     period,    dash,   shR2kcap,
                      lpupo3l1,   semicol,   brktL,   brktR,     lpupo6l6,
    guiL,   altR,
   ctrlR,   enter,   space,
lpupo2l2,   enter,   space  ),

// ............................................................................

    MATRIX_LAYER(  // - Layer 1:    special / extra chars, arrow-keys, movements, F's, good for programmers
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,         F1,       F2,       F3,        F4,       F5,     grave,
  transp,         at,      amp,     plus,  dblQuote,    quote,   bkslash,
  transp,   asterisk,   dollar,   parenL,    parenR,    slash,
  transp,     braceL,   braceR,    pound,   percent,    pipe,    pageD,
  transp,     transp,   transp,   transp,    transp,
                                                         transp,      F11,
                                              transp,   transp,   transp,
                                              transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
   transp,       F6,       F7,         F8,       F9,      F10,   ins,
   transp,   equal,    pageU,     home,      end,   transp,        bs,
             arrowL,   arrowD,   arrowU,   arrowR,   transp,      del,
   transp,   transp,    pageD,   transp,   transp,   transp,   transp,
                       transp,   transp,   transp,   transp,   transp,
  F12,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................


    MATRIX_LAYER(  // layer 2 : Extra special chars needed
       //   good for ruby, example, type:  sdf
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp, dblQuote,    quote,   transp,
  transp,    pound,   dollar,   braceL,   braceR,   transp,
  transp,   transp,   transp,    brktL,    brktR,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               num,   transp,   transp,    kpDiv, kpMul,    transp,  transp,
            prScr,   transp,     kp7,     kp8,     kp9,    kpSub,       bs,
                      transp,     kp4,     kp5,     kp6,    kpAdd,      del,
            transp,      kp0,     kp1,     kp2,     kp3,    kpEnter, transp,
                                  kp0,     kp0,   kpDec,    kpEnter, transp,
    transp,   transp,
    transp,   transp,   transp,
    transp,   transp,   transp  ),


// ............................................................................

    MATRIX_LAYER(  // layer 3 :  applications controls
// macro, unused,
// NOTE: actually this is used only for games like torus-trooper, to have the arrow keys and z,x
// working at the same time... FIXME: we should have this keyboard mode locked instead of pressed-while
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,
     transp,        z,        x,        c,        v,        b,   transp,
     transp,   transp,   transp,   transp,   transp,
                                               transp,   transp,
                                               transp,   transp,   transp,
                                               transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
    transp,   transp,      transp,   transp,   transp,   transp,   transp,
              arrowL,   arrowD,   arrowU,   arrowR,   transp,      del,
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
     transp, gui_selectline,    transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,      transp,      transp,
     transp,      transp,      transp,      transp,      transp,
                                                                 transp,      transp,
                                                       transp,      transp,      transp,
                                                       transp,      transp,      transp,
// right hand ..... ......... ......... ......... ......... ......... .........
     lc_all_c, bash_devnull1,   bash_devnull2,   bash_devnull12,   transp,   transp,   transp,
     transp,   transp,   transp,   transp,   transp,   transp,   transp,
               signature_niceday,   signature_name,   signature_email,   signature_thankyou,   signature_thx_support,   transp,
     transp,   donation_thx_important,   transp,   transp,   transp,   transp,   transp,
                         transp,   transp,   transp,   transp,   transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      transp  ),

// ............................................................................
    MATRIX_LAYER(  // layer 6 :  reverse (one hand) mode
// macro, unused,
       K,    transp,
// left hand ...... ......... ......... ......... ......... ......... .........
     transp,        0,        9,        8,        7,        6,  transp,
         bs,        p,        o,        i,        u,        y,    esc,
        del,   transp,        l,        k,        j,        h,
     transp,     dash,   period,    comma,        m,        n,    enter,
     transp,   transp,   transp,   transp,   transp,
                                                        transp,   transp,
                                               transp,   transp,   transp,
                                               space,    enter,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
     transp,        5,        4,        3,        2,        1,   transp,
     transp,        t,        r,        e,        w,        q,      tab,
                    g,        f,        d,        s,        a,    ctrlL,
     transp,        b,        v,        c,        x,        z,   transp,
                         transp,   transp,   transp,   transp,   transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      bs,          del  ),

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

