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

#define LTH_MAIN_NEAR KC_LALT
#define LTH_MAIN_HOME LTH_NAV_SPC
#define LTH_MAIN_FAR OSM_LSFT

#define RTH_MAIN_FAR OSM_RSFT
#define RTH_MAIN_HOME RTH_NAV_BSPC
#define RTH_MAIN_NEAR MO(FN2)

#define LSFT_ESC LSFT_T(KC_ESC)

#define LHR_LGUI_A LGUI_T(KC_A)
#define LHR_LALT_R LALT_T(KC_R)
#define LHR_LSFT_S LSFT_T(KC_S)
#define LHR_LCTL_T LCTL_T(KC_T)

#define RHR_RCTL_N RCTL_T(KC_N)
#define RHR_RSFT_E RSFT_T(KC_E)
#define RHR_LALT_I LALT_T(KC_I)
#define RHR_RGUI_O RGUI_T(KC_O)

#define KC_VL KC_V
#define KC_VR KC_V

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

/**
 * Returns true if the args come from keys on opposite hands.
 *
 * @param tap_hold_record keyrecord_t from the tap-hold key's event.
 * @param other_record keyrecord_t from the other key's event.
 * @return True if the keys are on opposite hands.
 */
 bool get_chordal_hold_default(const keyrecord_t* tap_hold_record,
    const keyrecord_t* other_record);
