/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

// you have to define your n0, n1, n2, n4, n8 positions as CK_N0, CK_N1, CK_N2,
// CK_N4, CK_N8 and your F10, F1, F2, F4, F8 positions (if they differ) as CK_F10,
// CK_F1, CK_F2, CK_F4, CK_F8 as well as the intended layers they are located
// on as CK_LN, CK_LF for this to work.
// Here are (my) default locations for a sweep:
#ifndef CK_LN
#define CK_LN 1
#endif
#ifndef CK_LF
#define CK_LF (CK_LN + 1)
#endif

#ifndef CK_N0
#define CK_N0 5
#endif
#ifndef CK_N1
#define CK_N1 (CK_N0 + 1)
#endif
#ifndef CK_N2
#define CK_N2 (CK_N1 + 1)
#endif
#ifndef CK_N4
#define CK_N4 (CK_N2 + 1)
#endif
#ifndef CK_N8
#define CK_N8 (CK_N4 + 1)
#endif

#ifndef CK_F10
#define CK_F10 CK_N0
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

/ { combos {
  compatible = "zmk,combos";

  // browser tab left/right
  tab_left {
    timeout-ms = <50>;
    key-positions = <1 2>;
    layers = <L_NAV_FN>;
    bindings = <&kp LS(LC(TAB))>;
  };
  tab_right {
    timeout-ms = <50>;
    key-positions = <1 2>;
    layers = <L_NAV_FN>;
    bindings = <&kp LC(TAB)>;
  };

  // numbers
  combo_N3 {
    timeout-ms = <50>;
    key-positions = <CK_N1 CK_N2>;
    layers = <CK_LN>;
    bindings = <&kp DE_N3>;
  };
  combo_N5 {
    timeout-ms = <50>;
    key-positions = <CK_N1 CK_N4>;
    layers = <CK_LN>;
    bindings = <&kp DE_N5>;
  };
  combo_N6 {
    timeout-ms = <50>;
    key-positions = <CK_N2 CK_N4>;
    layers = <CK_LN>;
    bindings = <&kp DE_N6>;
  };
  combo_N7 {
    timeout-ms = <50>;
    key-positions = <CK_N1 CK_N2 CK_N4>;
    layers = <CK_LN>;
    bindings = <&kp DE_N7>;
  };
  combo_N9 {
    timeout-ms = <50>;
    key-positions = <CK_N1 CK_N8>;
    layers = <CK_LN>;
    bindings = <&kp DE_N9>;
  };

  // function keys
  combo_F3 {
    timeout-ms = <50>;
    key-positions = <CK_F1 CK_F2>;
    layers = <CK_LF>;
    bindings = <&kp F3>;
  };
  combo_F5 {
    timeout-ms = <50>;
    key-positions = <CK_F1 CK_F4>;
    layers = <CK_LF>;
    bindings = <&kp F5>;
  };
  combo_F6 {
    timeout-ms = <50>;
    key-positions = <CK_F2 CK_F4>;
    layers = <CK_LF>;
    bindings = <&kp F6>;
  };
  combo_F7 {
    timeout-ms = <50>;
    key-positions = <CK_F1 CK_F2 CK_F4>;
    layers = <CK_LF>;
    bindings = <&kp F7>;
  };
  combo_F9 {
    timeout-ms = <50>;
    key-positions = <CK_F1 CK_F8>;
    layers = <CK_LF>;
    bindings = <&kp F9>;
  };
  combo_F11 {
    timeout-ms = <50>;
    key-positions = <CK_F10 CK_F1>;
    layers = <CK_LF>;
    bindings = <&kp F11>;
  };
  combo_F12 {
    timeout-ms = <50>;
    key-positions = <CK_F10 CK_F2>;
    layers = <CK_LF>;
    bindings = <&kp F12>;
  };

};
};
