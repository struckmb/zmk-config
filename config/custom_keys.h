#pragma once

#include "keys_de.h"
#include <dt-bindings/zmk/keys.h>

// Layer definitions (corne)
// #define L_QWERTY 0
#define L_SYMBOL 1
#define L__LOWER 2
#define L__RAISE 3
#define L__ATTIC 4
#define L__MOUSE 5
// thumb and layer keys
#define LSFT(kc) &mt LSHFT kc
#define RSFT(kc) &mt RSHFT kc
#define SYM(kc) &lt L_SYMBOL kc
#define LOW(kc) &lt L__LOWER kc
#define RSE(kc) &lt L__RAISE kc
#define ATT(kc) &lt L__ATTIC kc
#define SFT_RET LSFT(RET)
#define SFT_SPC RSFT(SPACE)

// Layer definitions (sweep)
#define QWERTZ 0
#define COLEMAK 1
#define NEOBONE 2
#define L_SYM_NR 3
#define L_NAV_FN 4
#define L_MS_MED 5
#define L_ADJUST 6
// thumb and layer keys
#define SYMNR(kc) &lt L_SYM_NR kc
#define NAVFN(kc) &lt L_NAV_FN kc

// shorter umlauts
#define DE_AE (DE_A_UMLAUT)
#define DE_OE (DE_O_UMLAUT)
#define DE_UE (DE_U_UMLAUT)

// hrm
#define HRML(k1, k2, k3) &mt LGUI k1 &mt LALT k2 &mt LCTRL k3
#define HRMR(k1, k2, k3) &mt LCTRL k1 &mt LALT k2 &mt LGUI k3
#define HRMS(k1) &mt LSHFT k1
#define MSMD(k1) &lt L_MS_MED k1

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
