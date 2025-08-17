#pragma once

#include "keys_de.h"
#include <dt-bindings/zmk/keys.h>

// Layer definitions (corne)
#define BL_QWER 0
#define BL_NEO2 1
#define BL_BONE 2
#define BL_NOTED 3
#define BL_COL_DH 4
#define L_SYM 5
#define L_LOW 6
#define L_RSE 7
#define L_MSE 8
#define L_ATC 9

// thumb and layer keys
#define LSH(kc) &mt LSHFT kc
#define RSH(kc) &mt RSHFT kc
#define SYM(kc) &lt L_SYM kc
#define LOW(kc) &lt L_LOW kc
#define RSE(kc) &lt L_RSE kc
#define MSE(kc) &lt L_MSE kc
#define ATT(kc) &lt L_ATC kc

// Layer definitions (sweep)
#define QWERTZ 0
#define NEO2 1
#define BONE 2
#define COLEMAK 3
#define L_SYM_NR 4
#define L_NAV_FN 5
#define L_MS_MED 6
#define L_ADJUST 7
// thumb and layer keys
#define MSMD(k1) &lt L_MS_MED k1
#define SYMNR_RET &lt L_SYM_NR RET
#define SYMNR_SPC &lt L_SYM_NR SPACE
#define NAVFN_ESC &lt L_NAV_FN ESC
#define NAVFN_TAB &lt L_NAV_FN TAB

// shorter umlauts
#define DE_AE (DE_A_UMLAUT)
#define DE_OE (DE_O_UMLAUT)
#define DE_UE (DE_U_UMLAUT)

// userful things
#define TAB_NEXT  &kp LC(TAB)
#define TAB_PREV  &kp LC(LS(TAB))
#define GUI_CARET &kp LG(DE_CARET)

// hrm
#define HRML(k1, k2, k3) &mt LGUI k1 &mt LALT k2 &mt LCTRL k3
#define HRMR(k1, k2, k3) &mt LCTRL k1 &mt LALT k2 &mt LGUI k3

// mod combo keys
#define MEH LS(LA(LCTRL))
#define HYPER LG(LS(LA(LCTRL)))

// cut copy paste
#define CCP_CUT LS(DEL)
#define CCP_CPY LC(INS)
#define CCP_PST LS(INS)

// // Linux extended chars
#define DE_F1_2 RA(DE_N5)    // ½
#define DE_F1_4 RA(DE_N4)    // ¼
#define DE_NOT RA(DE_N5)     // ¬
#define DE_CED RA(DE_ACUT)   // ¸ cedilla (dead)
#define DE_ARRL RA(DE_Z)     // ← left arrow
#define DE_ARRD RA(DE_U)     // ↓ down arrow
#define DE_ARRR RA(DE_I)     // → right arrow
#define DE_DIA RA(DE_UE)     // ¨ diaresis (dead)
#define DE_LDOT RA(DE_J)     // ̣  dot below (dead)
#define DE_HATS RA(DE_AE)    // ˇ hatschek (dead)
#define DE_FDQL RA(DE_X)     // « double guillemets left
#define DE_FDQR RA(DE_Y)     // » double guillemets right
#define DE_CENT RA(DE_C)     // ¢
#define DE_GBPND RA(LS(N3))  // £
#define DE_YEN RA(LS(DE_Z))  // ¥
#define DE_DQUL RA(DE_V)     // „ double quote left
#define DE_DQUR RA(DE_B)     // “ double quote right
#define DE_DQUE RA(DE_N)     // “ double quote right (en)
#define DE_CDOT RA(DE_COMMA) // · center dot
#define DE_HELL RA(DE_DOT)   // … horizontal ellipsis
#define DE_EN RA(DE_MINUS)   // – en dash

#define DE_IEXC LS(RA(DE_N1))    // ̣¡ inverted question mark
#define DE_F1_8 LS(RA(DE_N2))    // ⅛
#define DE_F3_8 LS(RA(DE_N5))    // ⅜
#define DE_F5_8 LS(RA(DE_N6))    // ⅝
#define DE_F7_8 LS(RA(DE_N7))    // ⅞
#define DE_TM LS(RA(DE_N8))      // ™
#define DE_IQUE LS(RA(DE_SZ))    // ̣¿ inverted question mark
#define DE_OGNK LS(RA(DE_ACUT))  // ˛ ogonek (dead)
#define DE_REG LS(RA(DE_R))      // ®
#define DE_ARRU LS(RA(DE_U))     // ↑ up arrow
#define DE_RING LS(RA(DE_UE))    // ° ring (dead)
#define DE_MCRN LS(RA(DE_PLUS))  // ¨ macron
#define DE_HDOT LS(RA(DE_J))     // ˙ dot above (dead)
#define DE_BRV LS(RA(DE_HASH))   // ˘ breve (dead)
#define DE_FSQL LS(RA(DE_X))     // ‹ single guillemets left
#define DE_FSQR LS(RA(DE_Y))     // › single guillemets right
#define DE_COPY LS(RA(DE_C))     // ©
#define DE_SQUL LS(RA(DE_V))     // ‚ single quote left
#define DE_SQUR LS(RA(DE_B))     // ‘ single quote right
#define DE_SQUE LS(RA(DE_N))     // ‘ single quote right (en)
#define DE_MULT LS(RA(DE_COMMA)) // × multiplication operator
#define DE_DIV LS(RA(DE_DOT))    // ÷ division operator
#define DE_EM LS(RA(DE_MINUS))   // — em dash
