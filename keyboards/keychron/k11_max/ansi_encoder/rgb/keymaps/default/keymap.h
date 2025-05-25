#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RSFT OSM(MOD_RSFT)

#define C_LEFT C(KC_LEFT)
#define C_RGHT C(KC_RGHT)
#define S_LEFT S(KC_LEFT)
#define S_RGHT S(KC_RGHT)

#define KC_ENDX KC_END
#define KC_UPXX KC_UP

#define LTH_NAV_SPC LT(_NAV, KC_SPC)
#define RTH_NAV_BSPC LT(_NAV, KC_BSPC)

#define LTH_MAIN_HOME LTH_NAV_SPC
#define LTH_MAIN_FAR OSM_LSFT

#define RTH_MAIN_FAR OSM_RSFT
#define RTH_MAIN_HOME RTH_NAV_BSPC

#define LSFT_ESC LSFT_T(KC_ESC)

// #define LHR_LGUI_A LGUI_T(KC_A)
// #define LHR_LALT_R LALT_T(KC_R)
// #define LHR_LSFT_S LSFT_T(KC_S)
// #define LHR_LCTL_T LCTL_T(KC_T)

// #define RHR_RCTL_N RCTL_T(KC_N)
// #define RHR_RSFT_E RSFT_T(KC_E)
// #define RHR_LALT_I LALT_T(KC_I)
// #define RHR_RGUI_O RGUI_T(KC_O)

enum layers {
    MAC_BASE,
    WIN_BASE,
    _NAV,
    MAC_FN1,
    WIN_FN1,
    FN2,
};

enum custom_keycodes {
    KC_NOTEPAD = SAFE_RANGE,
};
