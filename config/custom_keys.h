#include <dt-bindings/zmk/keys.h>
/* #include "keys_de.h" */

// Layer definitions
#define DEFAULT 0
#define L_SYM_NR  1
#define L_NAV_FN  2
#define L_MS_MED  3
#define L_ADJUST  4

// hrm
#define HRML(k1,k2,k3) &mt LGUI k1  &mt LCTRL k2  &mt LALT k3
#define HRMR(k1,k2,k3) HRML(k3,k2,k1)
#define HRMS(k1) &mt LSHFT k1

// mod combo keys
#define MEH   LS(LA(LCTRL))
#define HYPER LG(LS(LA(LCTRL)))

// cut copy paste
#define CCP_CUT LS(DEL)
#define CCP_CPY LC(INS)
#define CCP_PST LS(INS)

// shorter umlauts
#define DE_AE (DE_A_UMLAUT)
#define DE_OE (DE_O_UMLAUT)
#define DE_UE (DE_U_UMLAUT)

// Linux extended chars
#define DE_F1_2 RA(DE_N5)        // ½
#define DE_F1_4 RA(DE_N4)        // ¼
#define DE_NOT  RA(DE_N5)        // ¬
#define DE_CED  RA(DE_ACUT)      // ¸ cedilla (dead)
#define DE_ARRL RA(DE_Z)         // ← left arrow
#define DE_ARRD RA(DE_U)         // ↓ down arrow
#define DE_ARRR RA(DE_I)         // → right arrow
#define DE_DIA  RA(DE_UE)        // ¨ diaresis (dead)
#define DE_LDOT RA(DE_J)         // ̣  dot below (dead)
#define DE_HATS RA(DE_AE)        // ˇ hatschek (dead)
#define DE_FDQL RA(DE_Y)         // » double guillemets left
#define DE_FDQR RA(DE_X)         // « double guillemets right
#define DE_CENT RA(DE_C)         // ¢
#define DE_DQUL RA(DE_V)         // „ double quote left
#define DE_DQUR RA(DE_B)         // “ double quote right
#define DE_DQUE RA(DE_N)         // “ double quote right (en)
#define DE_CDOT RA(DE_COMMA)     // · center dot
#define DE_HELL RA(DE_DOT)       // … horizontal ellipsis
#define DE_EN   RA(DE_MINUS)     // – en dash

#define DE_IEXC LS(RA(DE_N1))    // ̣¡ inverted question mark
#define DE_F1_8 LS(RA(DE_N2))    // ⅛
#define DE_F3_8 LS(RA(DE_N5))    // ⅜
#define DE_F5_8 LS(RA(DE_N6))    // ⅝
#define DE_F7_8 LS(RA(DE_N7))    // ⅞
#define DE_TM   LS(RA(DE_N8))    // ™
#define DE_IQUE LS(RA(DE_SZ))    // ̣¿ inverted question mark
#define DE_OGNK LS(RA(DE_ACUT))  // ˛ ogonek (dead)
#define DE_REG  LS(RA(DE_R))     // ®
#define DE_ARRU LS(RA(DE_U))     // ↑ up arrow
#define DE_RING LS(RA(DE_UE))    // ° ring (dead)
#define DE_MCRN LS(RA(DE_PLUS))  // ¨ macron
#define DE_HDOT LS(RA(DE_J))     // ˙ dot above (dead)
#define DE_BRV  LS(RA(DE_HASH))  // ˘ breve (dead)
#define DE_FSQL LS(RA(DE_Y))     // › single guillemets left
#define DE_FSQR LS(RA(DE_X))     // ‹ single guillemets right
#define DE_COPY LS(RA(DE_C))     // ©
#define DE_SQUL LS(RA(DE_V))     // ‚ single quote left
#define DE_SQUR LS(RA(DE_B))     // ‘ single quote right
#define DE_SQUE LS(RA(DE_N))     // ‘ single quote right (en)
#define DE_MULT LS(RA(DE_COMMA)) // × multiplication operator
#define DE_DIV  LS(RA(DE_DOT))   // ÷ division operator
#define DE_EM   LS(RA(DE_MINUS)) // — em dash
