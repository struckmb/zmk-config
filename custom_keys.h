#include <dt-bindings/zmk/keys.h>

// clang-format off

// cut copy paste
#define CCP_CUT LS(DEL)
#define CCP_CPY LC(INS)
#define CCP_PST LS(INS)

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CARET GRAVE // ^ (dead)
#define DE_N1     N1    // 1
#define DE_N2     N2    // 2
#define DE_N3     N3    // 3
#define DE_N4     N4    // 4
#define DE_N5     N5    // 5
#define DE_N6     N6    // 6
#define DE_N7     N7    // 7
#define DE_N8     N8    // 8
#define DE_N9     N9    // 9
#define DE_N0     N0    // 0
#define DE_SZ    MINUS // ß
#define DE_ACUT  EQUAL // ´ (dead)
// Row 2
#define DE_Q     Q    // Q
#define DE_W     W    // W
#define DE_E     E    // E
#define DE_R     R    // R
#define DE_T     T    // T
#define DE_Z     Y    // Z
#define DE_U     U    // U
#define DE_I     I    // I
#define DE_O     O    // O
#define DE_P     P    // P
#define DE_UE    LBKT // Ü
#define DE_PLUS  RBKT // +
// Row 3
#define DE_A     A    // A
#define DE_S     S    // S
#define DE_D     D    // D
#define DE_F     F    // F
#define DE_G     G    // G
#define DE_H     H    // H
#define DE_J     J    // J
#define DE_K     K    // K
#define DE_L     L    // L
#define DE_OE    SEMI // Ö
#define DE_AE    SQT  // Ä
#define DE_HASH  NUHS // #
// Row 4
#define DE_LT    NUBS  // <
#define DE_Y     Z     // Y
#define DE_X     X     // X
#define DE_C     C     // C
#define DE_V     V     // V
#define DE_B     B     // B
#define DE_N     N     // N
#define DE_M     M     // M
#define DE_COMMA COMMA // ,
#define DE_DOT   DOT   // .
#define DE_MINUS SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG   LS(DE_CARET) // °
#define DE_EXCL  LS(DE_N1)     // !
#define DE_DQT   LS(DE_N2)     // "
#define DE_SECT  LS(DE_N3)     // §
#define DE_DLLR  LS(DE_N4)     // $
#define DE_PRCNT LS(DE_N5)     // %
#define DE_AMPS  LS(DE_N6)     // &
#define DE_FSLH  LS(DE_N7)     // /
#define DE_LPAR  LS(DE_N8)     // (
#define DE_RPAR  LS(DE_N9)     // )
#define DE_EQUAL LS(DE_N0)     // =
#define DE_QMARK LS(DE_SS)    // ?
#define DE_GRAVE LS(DE_ACUT)  // ` (dead)
// Row 2
#define DE_STAR  LS(DE_PLUS)  // *
// Row 3
#define DE_SQT   LS(DE_HASH)  // '
#define DE_APOS  DE_SQT       // '
// Row 4
#define DE_GT    LS(DE_LT)    // >
#define DE_SEMI  LS(DE_COMMA) // ;
#define DE_COLN  LS(DE_DOT)   // :
#define DE_UNDER LS(DE_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_SUP2  RA(DE_N2)    // ²
#define DE_SUP3  RA(DE_N3)    // ³
#define DE_LBRC  RA(DE_N7)    // {
#define DE_LBKT  RA(DE_N8)    // [
#define DE_RBKT  RA(DE_N9)    // ]
#define DE_RBRC  RA(DE_N0)    // }
#define DE_BSLH  RA(DE_SZ)   // (backslash)
// Row 2
#define DE_AT    RA(DE_Q)    // @
#define DE_EURO  RA(DE_E)    // €
#define DE_TILDE RA(DE_PLUS) // ~
// Row 4
#define DE_PIPE  RA(DE_LT)   // |
#define DE_MICRO RA(DE_M)    // µ

// Linux extended chars
#define DE_F1_2 RA(DE_N5)     // ½
#define DE_F1_4 RA(DE_N4)     // ¼
#define DE_NOT  RA(DE_N5)     // ¬
#define DE_CED  RA(DE_ACUT)  // ¸ cedilla (dead)
#define DE_EURO RA(DE_E)     // €
#define DE_ARRL RA(DE_Z)     // ← left arrow
#define DE_ARRD RA(DE_U)     // ↓ down arrow
#define DE_ARRR RA(DE_I)     // → right arrow
#define DE_DIA  RA(DE_UE)    // ¨ diaresis (dead)
#define DE_LDOT RA(DE_J)     // ̣  dot below (dead)
#define DE_HATS RA(DE_AE)    // ˇ hatschek (dead)
#define DE_FDQL RA(DE_Y)     // » double guillemets left
#define DE_FDQR RA(DE_X)     // « double guillemets right
#define DE_CENT RA(DE_C)     // ¢
#define DE_DQUL RA(DE_V)     // „ double quote left
#define DE_DQUR RA(DE_B)     // “ double quote right
#define DE_DQUE RA(DE_N)     // “ double quote right (en)
#define DE_CDOT RA(DE_COMMA) // · center dot
#define DE_HELL RA(DE_DOT)   // … horizontal ellipsis
#define DE_EN   RA(DE_MINUS) // – en dash

#define DE_IEXC LS(RA(DE_N1))     // ̣¡ inverted question mark
#define DE_F1_8 LS(RA(DE_N2))     // ⅛
#define DE_F3_8 LS(RA(DE_N5))     // ⅜
#define DE_F5_8 LS(RA(DE_N6))     // ⅝
#define DE_F7_8 LS(RA(DE_N7))     // ⅞
#define DE_TM   LS(RA(DE_N8))     // ™
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

