/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

// you have to define your n0, n1, n2, n4, n8 positions as CK_N1, CK_N2, CK_N4,
// CK_N8 and your F10, F1, F2, F4, F8 positions (if they differ) as CK_F10,
// CK_F1, CK_F2, CK_F4, CK_F8 as well as the intended layers they are located
// on as CK_LN, CK_LF for this to work.
// Here are (my) default locations for a kyria:
#ifndef CK_N1
#define CK_N1 6
#endif
#ifndef CK_N2
#define CK_N2 7
#endif
#ifndef CK_N4
#define CK_N4 8
#endif
#ifndef CK_N8
#define CK_N8 9
#endif
#ifndef CK_F1
#define CK_F1 CK_N1
#endif
#ifndef CK_F2
#define CK_F2 CK_N2
#endif
#ifndef CK_F4
#define CK_F4 CK_N4
#endif
#ifndef CK_F8
#define CK_F8 CK_N8
#endif
#ifndef CK_F10
#define CK_F10 5
#endif

/ { 

    combos {
        compatible = "zmk,combos";

        // numbers
        combo_N3 {
            timeout-ms = <50>;
            key-positions = <CK_N1 CK_N2>;
            layers = <1>;
            bindings = <&kp DE_N3>;
        };
        combo_N5 {
            timeout-ms = <50>;
            key-positions = <CK_N1 CK_N4>;
            layers = <1>;
            bindings = <&kp DE_N5>;
        };
        combo_N6 {
            timeout-ms = <50>;
            key-positions = <CK_N2 CK_N4>;
            layers = <1>;
            bindings = <&kp DE_N6>;
        };
        combo_N7 {
            timeout-ms = <50>;
            key-positions = <CK_N1 CK_N2 CK_N4>;
            layers = <1>;
            bindings = <&kp DE_N7>;
        };
        combo_N9 {
            timeout-ms = <50>;
            key-positions = <CK_N1 CK_N8>;
            layers = <1>;
            bindings = <&kp DE_N9>;
        };

        // function keys
        combo_F3 {
            timeout-ms = <50>;
            key-positions = <CK_F1 CK_F2>;
            layers = <2>;
            bindings = <&kp F3>;
        };
        combo_F5 {
            timeout-ms = <50>;
            key-positions = <CK_F1 CK_F4>;
            layers = <2>;
            bindings = <&kp F5>;
        };
        combo_F6 {
            timeout-ms = <50>;
            key-positions = <CK_F2 CK_F4>;
            layers = <2>;
            bindings = <&kp F6>;
        };
        combo_F7 {
            timeout-ms = <50>;
            key-positions = <CK_F1 CK_F2 CK_F4>;
            layers = <2>;
            bindings = <&kp F7>;
        };
        combo_F9 {
            timeout-ms = <50>;
            key-positions = <CK_F1 CK_F8>;
            layers = <2>;
            bindings = <&kp F9>;
        };
        combo_F11 {
            timeout-ms = <50>;
            key-positions = <CK_F10 CK_F1>;
            layers = <2>;
            bindings = <&kp F11>;
        };
        combo_F12 {
            timeout-ms = <50>;
            key-positions = <CK_F10 CK_F2>;
            layers = <2>;
            bindings = <&kp F12>;
        };

    };
};
