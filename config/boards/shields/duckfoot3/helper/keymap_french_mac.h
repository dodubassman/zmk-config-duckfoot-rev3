/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ @ │ & │ é │ " │ ' │ ( │ § │ è │ ! │ ç │ à │ ) │ - │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ ` │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ = │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_AT   NON_US_BSLH // @
#define FR_AMPS N1          // &
#define FR_EACU N2          // é
#define FR_DQUO N3          // "
#define FR_QUOT N4          // '
#define FR_LPRN N5          // (
#define FR_SECT N6          // §
#define FR_EGRV N7          // è
#define FR_EXLM N8          // !
#define FR_CCED N9          // ç
#define FR_AGRV N0          // à
#define FR_RPRN MINUS       // )
#define FR_MINS EQUAL       // -
// Row 2
#define FR_A    Q           // A
#define FR_Z    W           // Z
#define FR_E    E           // E
#define FR_R    R           // R
#define FR_T    T           // T
#define FR_Y    Y           // Y
#define FR_U    U           // U
#define FR_I    I           // I
#define FR_O    O           // O
#define FR_P    P           // P
#define FR_CIRC LBKT        // ^ (dead)
#define FR_DLR  RBKT        // $
// Row 3
#define FR_Q    A           // Q
#define FR_S    S           // S
#define FR_D    D           // D
#define FR_F    F           // F
#define FR_G    G           // G
#define FR_H    H           // H
#define FR_J    J           // J
#define FR_K    K           // K
#define FR_L    L           // L
#define FR_M    SEMI        // M
#define FR_UGRV SQT         // ù
#define FR_GRV  NON_US_HASH // ` (dead)
// Row 4
#define FR_LABK GRAVE       // <
#define FR_W    Z           // W
#define FR_X    X           // X
#define FR_C    C           // C
#define FR_V    V           // V
#define FR_B    B           // B
#define FR_N    N           // N
#define FR_COMM M           // ,
#define FR_SCLN COMMA       // ;
#define FR_COLN DOT         // :
#define FR_EQL  FSLH        // =

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ _ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ £ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ + │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_HASH LS(FR_AT)   // # 
#define FR_1    LS(FR_AMPS) // 1
#define FR_2    LS(FR_EACU) // 2
#define FR_3    LS(FR_DQUO) // 3
#define FR_4    LS(FR_QUOT) // 4
#define FR_5    LS(FR_LPRN) // 5
#define FR_6    LS(FR_MINS) // 6
#define FR_7    LS(FR_EGRV) // 7
#define FR_8    LS(FR_UNDS) // 8
#define FR_9    LS(FR_CCED) // 9
#define FR_0    LS(FR_AGRV) // 0
#define FR_DEG  LS(FR_RPRN) // °
#define FR_UNDS LS(FR_MINS) // _
// Row 2
#define FR_DIAE LS(FR_CIRC) // ¨ (dead)
#define FR_ASTR LS(FR_DLR)  // *
// Row 3
#define FR_PERC LS(FR_UGRV) // %
#define FR_PND  LS(FR_ASTR) // £
// Row 4
#define FR_RABK LS(FR_LABK) // >
#define FR_QUES LS(FR_COMM) // ?
#define FR_DOT  LS(FR_SCLN) // .
#define FR_SLSH LS(FR_COLN) // /
#define FR_PLUS LS(FR_EQL)  // +

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │ { │   │   │   │   │   │ } │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ € │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │ ~ │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_LCBR RA(N5)      // {
#define FR_RCBR RA(MINUS)   // }
// Row 2
#define FR_EURO RA(FR_DLR)  // €
// Row 4
#define FR_TILD RA(FR_N)    // ~ (dead)


/* Alt Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ´ │   │   │   │ [ │   │   │   │   │   │ ] │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │ | │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │ \ │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_ACUT RA(RS(N1))    // ´ (dead)
#define FR_LBRC RA(RS(N5))    // [
#define FR_RBRC RA(RS(MINUS)) // ]
// Row 3
#define FR_PIPE RA(RS(L))     // |
// Row 4
#define FR_BSLS RA(RS(DOT))   // (backslash)
