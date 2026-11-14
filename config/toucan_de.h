#pragma once

#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

/* German-layout characters mapped to their physical HID key positions. */
#define DE_A A
#define DE_B B
#define DE_C C
#define DE_D D
#define DE_E E
#define DE_F F
#define DE_G G
#define DE_H H
#define DE_I I
#define DE_J J
#define DE_K K
#define DE_L L
#define DE_M M
#define DE_N N
#define DE_O O
#define DE_P P
#define DE_Q Q
#define DE_R R
#define DE_S S
#define DE_T T
#define DE_U U
#define DE_V V
#define DE_W W
#define DE_X X
#define DE_Y Z
#define DE_Z Y

#define DE_AE APOS
#define DE_OE SEMI
#define DE_UE LBKT
#define DE_SS MINUS
#define DE_COMMA COMMA
#define DE_DOT DOT

#define DE_N0 N0
#define DE_N1 N1
#define DE_N2 N2
#define DE_N3 N3
#define DE_N4 N4
#define DE_N5 N5
#define DE_N6 N6
#define DE_N7 N7
#define DE_N8 N8
#define DE_N9 N9

#define DE_EXCLAMATION LS(N1)
#define DE_EXCL DE_EXCLAMATION
#define DE_DOLLAR LS(N4)
#define DE_DLLR DE_DOLLAR
#define DE_PERCENT LS(N5)
#define DE_PRCNT DE_PERCENT
#define DE_AMPERSAND LS(N6)
#define DE_AMPS DE_AMPERSAND
#define DE_DOUBLE_QUOTES LS(N2)
#define DE_DQT DE_DOUBLE_QUOTES
#define DE_SINGLE_QUOTE LS(BACKSLASH)
#define DE_SQT DE_SINGLE_QUOTE
#define DE_AT RA(Q)
#define DE_HASH ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)
#define DE_UNDERSCORE LS(SLASH)
#define DE_UNDER DE_UNDERSCORE
#define DE_LEFT_BRACKET RA(N8)
#define DE_LBKT DE_LEFT_BRACKET
#define DE_RIGHT_BRACKET RA(N9)
#define DE_RBKT DE_RIGHT_BRACKET
#define DE_LEFT_BRACE RA(N7)
#define DE_LBRC DE_LEFT_BRACE
#define DE_RIGHT_BRACE RA(N0)
#define DE_RBRC DE_RIGHT_BRACE
#define DE_CARET GRAVE
#define DE_BACKSLASH RA(SLASH)
#define DE_BSLH DE_BACKSLASH
#define DE_SLASH LS(N7)
#define DE_FSLH DE_SLASH
#define DE_ASTERISK LS(RIGHT_BRACKET)
#define DE_STAR DE_ASTERISK
#define DE_LEFT_PARENTHESIS LS(N8)
#define DE_LPAR DE_LEFT_PARENTHESIS
#define DE_RIGHT_PARENTHESIS LS(N9)
#define DE_RPAR DE_RIGHT_PARENTHESIS
#define DE_LESS_THAN ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)
#define DE_LT DE_LESS_THAN
#define DE_GREATER_THAN LS(DE_LESS_THAN)
#define DE_GT DE_GREATER_THAN
#define DE_EQUAL LS(N0)
#define DE_PLUS RIGHT_BRACKET
#define DE_MINUS SLASH
#define DE_QUESTION LS(MINUS)
#define DE_COLON LS(DOT)
#define DE_COLN DE_COLON
#define DE_PIPE RA(DE_LESS_THAN)
#define DE_TILDE RA(RIGHT_BRACKET)
#define DE_GRAVE LS(EQUAL)
#define DE_SEMICOLON LS(COMMA)
#define DE_SCLN DE_SEMICOLON
#define DE_SECTION LS(N3)
#define DE_SECT DE_SECTION
#define DE_PND LS(RA(N3))
#define DE_ELLIPSIS RA(DOT)
#define DE_ELLP DE_ELLIPSIS
#define DE_SLNG RA(S)
#define DE_CENT RA(C)
#define DE_ACUTE EQUAL
#define DE_DEGREE LS(GRAVE)
#define DE_DEG DE_DEGREE
#define DE_EURO RA(E)
#define DE_MDOT RA(COMMA)
#define DE_LDAQ RA(DE_X)
#define DE_RDAQ RA(DE_Y)
#define DE_LSAQ LS(RA(DE_X))
#define DE_RSAQ LS(RA(DE_Y))
#define DE_DLQU RA(V)
#define DE_LDQU RA(B)
#define DE_RDQU RA(N)
#define DE_SLQU LS(RA(V))
#define DE_LSQU LS(RA(B))
#define DE_RSQU LS(RA(N))
#define DE_NDSH RA(SLASH)
#define DE_MDSH LS(RA(SLASH))
