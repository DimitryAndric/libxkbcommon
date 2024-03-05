#ifndef KEYSYM_TEST_H
#define KEYSYM_TEST_H

#include "xkbcommon/xkbcommon.h"
#include "xkbcommon/xkbcommon-keysyms.h"

struct ambiguous_icase_ks_names_entry {
    xkb_keysym_t keysym;
    const int count;
    const char *names[3];
};

static const struct ambiguous_icase_ks_names_entry
ambiguous_icase_ks_names[] = {
    { XKB_KEY_dead_a, 2, { "dead_A", "dead_a" } },
    { XKB_KEY_dead_e, 2, { "dead_E", "dead_e" } },
    { XKB_KEY_dead_i, 2, { "dead_I", "dead_i" } },
    { XKB_KEY_dead_o, 2, { "dead_O", "dead_o" } },
    { XKB_KEY_dead_u, 2, { "dead_U", "dead_u" } },
    { XKB_KEY_dead_schwa, 2, { "dead_SCHWA", "dead_schwa" } },
    { XKB_KEY_ch, 3, { "CH", "Ch", "ch" } },
    { XKB_KEY_c_h, 3, { "C_H", "C_h", "c_h" } },
    { XKB_KEY_a, 2, { "A", "a" } },
    { XKB_KEY_b, 2, { "B", "b" } },
    { XKB_KEY_c, 2, { "C", "c" } },
    { XKB_KEY_d, 2, { "D", "d" } },
    { XKB_KEY_e, 2, { "E", "e" } },
    { XKB_KEY_f, 2, { "F", "f" } },
    { XKB_KEY_g, 2, { "G", "g" } },
    { XKB_KEY_h, 2, { "H", "h" } },
    { XKB_KEY_i, 2, { "I", "i" } },
    { XKB_KEY_j, 2, { "J", "j" } },
    { XKB_KEY_k, 2, { "K", "k" } },
    { XKB_KEY_l, 2, { "L", "l" } },
    { XKB_KEY_m, 2, { "M", "m" } },
    { XKB_KEY_n, 2, { "N", "n" } },
    { XKB_KEY_o, 2, { "O", "o" } },
    { XKB_KEY_p, 2, { "P", "p" } },
    { XKB_KEY_q, 2, { "Q", "q" } },
    { XKB_KEY_r, 2, { "R", "r" } },
    { XKB_KEY_s, 2, { "S", "s" } },
    { XKB_KEY_t, 2, { "T", "t" } },
    { XKB_KEY_u, 2, { "U", "u" } },
    { XKB_KEY_v, 2, { "V", "v" } },
    { XKB_KEY_w, 2, { "W", "w" } },
    { XKB_KEY_x, 2, { "X", "x" } },
    { XKB_KEY_y, 2, { "Y", "y" } },
    { XKB_KEY_z, 2, { "Z", "z" } },
    { XKB_KEY_agrave, 2, { "Agrave", "agrave" } },
    { XKB_KEY_aacute, 2, { "Aacute", "aacute" } },
    { XKB_KEY_acircumflex, 2, { "Acircumflex", "acircumflex" } },
    { XKB_KEY_atilde, 2, { "Atilde", "atilde" } },
    { XKB_KEY_adiaeresis, 2, { "Adiaeresis", "adiaeresis" } },
    { XKB_KEY_aring, 2, { "Aring", "aring" } },
    { XKB_KEY_ae, 2, { "AE", "ae" } },
    { XKB_KEY_ccedilla, 2, { "Ccedilla", "ccedilla" } },
    { XKB_KEY_egrave, 2, { "Egrave", "egrave" } },
    { XKB_KEY_eacute, 2, { "Eacute", "eacute" } },
    { XKB_KEY_ecircumflex, 2, { "Ecircumflex", "ecircumflex" } },
    { XKB_KEY_ediaeresis, 2, { "Ediaeresis", "ediaeresis" } },
    { XKB_KEY_igrave, 2, { "Igrave", "igrave" } },
    { XKB_KEY_iacute, 2, { "Iacute", "iacute" } },
    { XKB_KEY_icircumflex, 2, { "Icircumflex", "icircumflex" } },
    { XKB_KEY_idiaeresis, 2, { "Idiaeresis", "idiaeresis" } },
    { XKB_KEY_eth, 3, { "ETH", "Eth", "eth" } },
    { XKB_KEY_ntilde, 2, { "Ntilde", "ntilde" } },
    { XKB_KEY_ograve, 2, { "Ograve", "ograve" } },
    { XKB_KEY_oacute, 2, { "Oacute", "oacute" } },
    { XKB_KEY_ocircumflex, 2, { "Ocircumflex", "ocircumflex" } },
    { XKB_KEY_otilde, 2, { "Otilde", "otilde" } },
    { XKB_KEY_odiaeresis, 2, { "Odiaeresis", "odiaeresis" } },
    { XKB_KEY_oslash, 2, { "Oslash", "oslash" } },
    { XKB_KEY_ooblique, 2, { "Ooblique", "ooblique" } },
    { XKB_KEY_ugrave, 2, { "Ugrave", "ugrave" } },
    { XKB_KEY_uacute, 2, { "Uacute", "uacute" } },
    { XKB_KEY_ucircumflex, 2, { "Ucircumflex", "ucircumflex" } },
    { XKB_KEY_udiaeresis, 2, { "Udiaeresis", "udiaeresis" } },
    { XKB_KEY_yacute, 2, { "Yacute", "yacute" } },
    { XKB_KEY_thorn, 3, { "THORN", "Thorn", "thorn" } },
    { XKB_KEY_ydiaeresis, 2, { "Ydiaeresis", "ydiaeresis" } },
    { XKB_KEY_aogonek, 2, { "Aogonek", "aogonek" } },
    { XKB_KEY_lstroke, 2, { "Lstroke", "lstroke" } },
    { XKB_KEY_lcaron, 2, { "Lcaron", "lcaron" } },
    { XKB_KEY_sacute, 2, { "Sacute", "sacute" } },
    { XKB_KEY_scaron, 2, { "Scaron", "scaron" } },
    { XKB_KEY_scedilla, 2, { "Scedilla", "scedilla" } },
    { XKB_KEY_tcaron, 2, { "Tcaron", "tcaron" } },
    { XKB_KEY_zacute, 2, { "Zacute", "zacute" } },
    { XKB_KEY_zcaron, 2, { "Zcaron", "zcaron" } },
    { XKB_KEY_zabovedot, 2, { "Zabovedot", "zabovedot" } },
    { XKB_KEY_racute, 2, { "Racute", "racute" } },
    { XKB_KEY_abreve, 2, { "Abreve", "abreve" } },
    { XKB_KEY_lacute, 2, { "Lacute", "lacute" } },
    { XKB_KEY_cacute, 2, { "Cacute", "cacute" } },
    { XKB_KEY_ccaron, 2, { "Ccaron", "ccaron" } },
    { XKB_KEY_eogonek, 2, { "Eogonek", "eogonek" } },
    { XKB_KEY_ecaron, 2, { "Ecaron", "ecaron" } },
    { XKB_KEY_dcaron, 2, { "Dcaron", "dcaron" } },
    { XKB_KEY_dstroke, 2, { "Dstroke", "dstroke" } },
    { XKB_KEY_nacute, 2, { "Nacute", "nacute" } },
    { XKB_KEY_ncaron, 2, { "Ncaron", "ncaron" } },
    { XKB_KEY_odoubleacute, 2, { "Odoubleacute", "odoubleacute" } },
    { XKB_KEY_rcaron, 2, { "Rcaron", "rcaron" } },
    { XKB_KEY_uring, 2, { "Uring", "uring" } },
    { XKB_KEY_udoubleacute, 2, { "Udoubleacute", "udoubleacute" } },
    { XKB_KEY_tcedilla, 2, { "Tcedilla", "tcedilla" } },
    { XKB_KEY_hstroke, 2, { "Hstroke", "hstroke" } },
    { XKB_KEY_hcircumflex, 2, { "Hcircumflex", "hcircumflex" } },
    { XKB_KEY_gbreve, 2, { "Gbreve", "gbreve" } },
    { XKB_KEY_jcircumflex, 2, { "Jcircumflex", "jcircumflex" } },
    { XKB_KEY_cabovedot, 2, { "Cabovedot", "cabovedot" } },
    { XKB_KEY_ccircumflex, 2, { "Ccircumflex", "ccircumflex" } },
    { XKB_KEY_gabovedot, 2, { "Gabovedot", "gabovedot" } },
    { XKB_KEY_gcircumflex, 2, { "Gcircumflex", "gcircumflex" } },
    { XKB_KEY_ubreve, 2, { "Ubreve", "ubreve" } },
    { XKB_KEY_scircumflex, 2, { "Scircumflex", "scircumflex" } },
    { XKB_KEY_rcedilla, 2, { "Rcedilla", "rcedilla" } },
    { XKB_KEY_itilde, 2, { "Itilde", "itilde" } },
    { XKB_KEY_lcedilla, 2, { "Lcedilla", "lcedilla" } },
    { XKB_KEY_emacron, 2, { "Emacron", "emacron" } },
    { XKB_KEY_gcedilla, 2, { "Gcedilla", "gcedilla" } },
    { XKB_KEY_tslash, 2, { "Tslash", "tslash" } },
    { XKB_KEY_eng, 2, { "ENG", "eng" } },
    { XKB_KEY_amacron, 2, { "Amacron", "amacron" } },
    { XKB_KEY_iogonek, 2, { "Iogonek", "iogonek" } },
    { XKB_KEY_eabovedot, 2, { "Eabovedot", "eabovedot" } },
    { XKB_KEY_imacron, 2, { "Imacron", "imacron" } },
    { XKB_KEY_ncedilla, 2, { "Ncedilla", "ncedilla" } },
    { XKB_KEY_omacron, 2, { "Omacron", "omacron" } },
    { XKB_KEY_kcedilla, 2, { "Kcedilla", "kcedilla" } },
    { XKB_KEY_uogonek, 2, { "Uogonek", "uogonek" } },
    { XKB_KEY_utilde, 2, { "Utilde", "utilde" } },
    { XKB_KEY_umacron, 2, { "Umacron", "umacron" } },
    { XKB_KEY_wcircumflex, 2, { "Wcircumflex", "wcircumflex" } },
    { XKB_KEY_ycircumflex, 2, { "Ycircumflex", "ycircumflex" } },
    { XKB_KEY_babovedot, 2, { "Babovedot", "babovedot" } },
    { XKB_KEY_dabovedot, 2, { "Dabovedot", "dabovedot" } },
    { XKB_KEY_fabovedot, 2, { "Fabovedot", "fabovedot" } },
    { XKB_KEY_mabovedot, 2, { "Mabovedot", "mabovedot" } },
    { XKB_KEY_pabovedot, 2, { "Pabovedot", "pabovedot" } },
    { XKB_KEY_sabovedot, 2, { "Sabovedot", "sabovedot" } },
    { XKB_KEY_tabovedot, 2, { "Tabovedot", "tabovedot" } },
    { XKB_KEY_wgrave, 2, { "Wgrave", "wgrave" } },
    { XKB_KEY_wacute, 2, { "Wacute", "wacute" } },
    { XKB_KEY_wdiaeresis, 2, { "Wdiaeresis", "wdiaeresis" } },
    { XKB_KEY_ygrave, 2, { "Ygrave", "ygrave" } },
    { XKB_KEY_oe, 2, { "OE", "oe" } },
    { XKB_KEY_kana_a, 2, { "kana_A", "kana_a" } },
    { XKB_KEY_kana_i, 2, { "kana_I", "kana_i" } },
    { XKB_KEY_kana_u, 2, { "kana_U", "kana_u" } },
    { XKB_KEY_kana_e, 2, { "kana_E", "kana_e" } },
    { XKB_KEY_kana_o, 2, { "kana_O", "kana_o" } },
    { XKB_KEY_kana_ya, 2, { "kana_YA", "kana_ya" } },
    { XKB_KEY_kana_yu, 2, { "kana_YU", "kana_yu" } },
    { XKB_KEY_kana_yo, 2, { "kana_YO", "kana_yo" } },
    { XKB_KEY_kana_tsu, 2, { "kana_TSU", "kana_tsu" } },
    { XKB_KEY_kana_tu, 2, { "kana_TU", "kana_tu" } },
    { XKB_KEY_Cyrillic_ghe_bar, 2, { "Cyrillic_GHE_bar", "Cyrillic_ghe_bar" } },
    { XKB_KEY_Cyrillic_zhe_descender, 2, { "Cyrillic_ZHE_descender", "Cyrillic_zhe_descender" } },
    { XKB_KEY_Cyrillic_ka_descender, 2, { "Cyrillic_KA_descender", "Cyrillic_ka_descender" } },
    { XKB_KEY_Cyrillic_ka_vertstroke, 2, { "Cyrillic_KA_vertstroke", "Cyrillic_ka_vertstroke" } },
    { XKB_KEY_Cyrillic_en_descender, 2, { "Cyrillic_EN_descender", "Cyrillic_en_descender" } },
    { XKB_KEY_Cyrillic_u_straight, 2, { "Cyrillic_U_straight", "Cyrillic_u_straight" } },
    { XKB_KEY_Cyrillic_u_straight_bar, 2, { "Cyrillic_U_straight_bar", "Cyrillic_u_straight_bar" } },
    { XKB_KEY_Cyrillic_ha_descender, 2, { "Cyrillic_HA_descender", "Cyrillic_ha_descender" } },
    { XKB_KEY_Cyrillic_che_descender, 2, { "Cyrillic_CHE_descender", "Cyrillic_che_descender" } },
    { XKB_KEY_Cyrillic_che_vertstroke, 2, { "Cyrillic_CHE_vertstroke", "Cyrillic_che_vertstroke" } },
    { XKB_KEY_Cyrillic_shha, 2, { "Cyrillic_SHHA", "Cyrillic_shha" } },
    { XKB_KEY_Cyrillic_schwa, 2, { "Cyrillic_SCHWA", "Cyrillic_schwa" } },
    { XKB_KEY_Cyrillic_i_macron, 2, { "Cyrillic_I_macron", "Cyrillic_i_macron" } },
    { XKB_KEY_Cyrillic_o_bar, 2, { "Cyrillic_O_bar", "Cyrillic_o_bar" } },
    { XKB_KEY_Cyrillic_u_macron, 2, { "Cyrillic_U_macron", "Cyrillic_u_macron" } },
    { XKB_KEY_Serbian_dje, 2, { "Serbian_DJE", "Serbian_dje" } },
    { XKB_KEY_Macedonia_gje, 2, { "Macedonia_GJE", "Macedonia_gje" } },
    { XKB_KEY_Cyrillic_io, 2, { "Cyrillic_IO", "Cyrillic_io" } },
    { XKB_KEY_Ukrainian_ie, 2, { "Ukrainian_IE", "Ukrainian_ie" } },
    { XKB_KEY_Ukranian_je, 2, { "Ukranian_JE", "Ukranian_je" } },
    { XKB_KEY_Macedonia_dse, 2, { "Macedonia_DSE", "Macedonia_dse" } },
    { XKB_KEY_Ukrainian_i, 2, { "Ukrainian_I", "Ukrainian_i" } },
    { XKB_KEY_Ukranian_i, 2, { "Ukranian_I", "Ukranian_i" } },
    { XKB_KEY_Ukrainian_yi, 2, { "Ukrainian_YI", "Ukrainian_yi" } },
    { XKB_KEY_Ukranian_yi, 2, { "Ukranian_YI", "Ukranian_yi" } },
    { XKB_KEY_Cyrillic_je, 2, { "Cyrillic_JE", "Cyrillic_je" } },
    { XKB_KEY_Serbian_je, 2, { "Serbian_JE", "Serbian_je" } },
    { XKB_KEY_Cyrillic_lje, 2, { "Cyrillic_LJE", "Cyrillic_lje" } },
    { XKB_KEY_Serbian_lje, 2, { "Serbian_LJE", "Serbian_lje" } },
    { XKB_KEY_Cyrillic_nje, 2, { "Cyrillic_NJE", "Cyrillic_nje" } },
    { XKB_KEY_Serbian_nje, 2, { "Serbian_NJE", "Serbian_nje" } },
    { XKB_KEY_Serbian_tshe, 2, { "Serbian_TSHE", "Serbian_tshe" } },
    { XKB_KEY_Macedonia_kje, 2, { "Macedonia_KJE", "Macedonia_kje" } },
    { XKB_KEY_Ukrainian_ghe_with_upturn, 2, { "Ukrainian_GHE_WITH_UPTURN", "Ukrainian_ghe_with_upturn" } },
    { XKB_KEY_Byelorussian_shortu, 2, { "Byelorussian_SHORTU", "Byelorussian_shortu" } },
    { XKB_KEY_Cyrillic_dzhe, 2, { "Cyrillic_DZHE", "Cyrillic_dzhe" } },
    { XKB_KEY_Serbian_dze, 2, { "Serbian_DZE", "Serbian_dze" } },
    { XKB_KEY_Cyrillic_yu, 2, { "Cyrillic_YU", "Cyrillic_yu" } },
    { XKB_KEY_Cyrillic_a, 2, { "Cyrillic_A", "Cyrillic_a" } },
    { XKB_KEY_Cyrillic_be, 2, { "Cyrillic_BE", "Cyrillic_be" } },
    { XKB_KEY_Cyrillic_tse, 2, { "Cyrillic_TSE", "Cyrillic_tse" } },
    { XKB_KEY_Cyrillic_de, 2, { "Cyrillic_DE", "Cyrillic_de" } },
    { XKB_KEY_Cyrillic_ie, 2, { "Cyrillic_IE", "Cyrillic_ie" } },
    { XKB_KEY_Cyrillic_ef, 2, { "Cyrillic_EF", "Cyrillic_ef" } },
    { XKB_KEY_Cyrillic_ghe, 2, { "Cyrillic_GHE", "Cyrillic_ghe" } },
    { XKB_KEY_Cyrillic_ha, 2, { "Cyrillic_HA", "Cyrillic_ha" } },
    { XKB_KEY_Cyrillic_i, 2, { "Cyrillic_I", "Cyrillic_i" } },
    { XKB_KEY_Cyrillic_shorti, 2, { "Cyrillic_SHORTI", "Cyrillic_shorti" } },
    { XKB_KEY_Cyrillic_ka, 2, { "Cyrillic_KA", "Cyrillic_ka" } },
    { XKB_KEY_Cyrillic_el, 2, { "Cyrillic_EL", "Cyrillic_el" } },
    { XKB_KEY_Cyrillic_em, 2, { "Cyrillic_EM", "Cyrillic_em" } },
    { XKB_KEY_Cyrillic_en, 2, { "Cyrillic_EN", "Cyrillic_en" } },
    { XKB_KEY_Cyrillic_o, 2, { "Cyrillic_O", "Cyrillic_o" } },
    { XKB_KEY_Cyrillic_pe, 2, { "Cyrillic_PE", "Cyrillic_pe" } },
    { XKB_KEY_Cyrillic_ya, 2, { "Cyrillic_YA", "Cyrillic_ya" } },
    { XKB_KEY_Cyrillic_er, 2, { "Cyrillic_ER", "Cyrillic_er" } },
    { XKB_KEY_Cyrillic_es, 2, { "Cyrillic_ES", "Cyrillic_es" } },
    { XKB_KEY_Cyrillic_te, 2, { "Cyrillic_TE", "Cyrillic_te" } },
    { XKB_KEY_Cyrillic_u, 2, { "Cyrillic_U", "Cyrillic_u" } },
    { XKB_KEY_Cyrillic_zhe, 2, { "Cyrillic_ZHE", "Cyrillic_zhe" } },
    { XKB_KEY_Cyrillic_ve, 2, { "Cyrillic_VE", "Cyrillic_ve" } },
    { XKB_KEY_Cyrillic_softsign, 2, { "Cyrillic_SOFTSIGN", "Cyrillic_softsign" } },
    { XKB_KEY_Cyrillic_yeru, 2, { "Cyrillic_YERU", "Cyrillic_yeru" } },
    { XKB_KEY_Cyrillic_ze, 2, { "Cyrillic_ZE", "Cyrillic_ze" } },
    { XKB_KEY_Cyrillic_sha, 2, { "Cyrillic_SHA", "Cyrillic_sha" } },
    { XKB_KEY_Cyrillic_e, 2, { "Cyrillic_E", "Cyrillic_e" } },
    { XKB_KEY_Cyrillic_shcha, 2, { "Cyrillic_SHCHA", "Cyrillic_shcha" } },
    { XKB_KEY_Cyrillic_che, 2, { "Cyrillic_CHE", "Cyrillic_che" } },
    { XKB_KEY_Cyrillic_hardsign, 2, { "Cyrillic_HARDSIGN", "Cyrillic_hardsign" } },
    { XKB_KEY_Greek_alphaaccent, 2, { "Greek_ALPHAaccent", "Greek_alphaaccent" } },
    { XKB_KEY_Greek_epsilonaccent, 2, { "Greek_EPSILONaccent", "Greek_epsilonaccent" } },
    { XKB_KEY_Greek_etaaccent, 2, { "Greek_ETAaccent", "Greek_etaaccent" } },
    { XKB_KEY_Greek_iotaaccent, 2, { "Greek_IOTAaccent", "Greek_iotaaccent" } },
    { XKB_KEY_Greek_iotadieresis, 2, { "Greek_IOTAdieresis", "Greek_iotadieresis" } },
    { XKB_KEY_Greek_omicronaccent, 2, { "Greek_OMICRONaccent", "Greek_omicronaccent" } },
    { XKB_KEY_Greek_upsilonaccent, 2, { "Greek_UPSILONaccent", "Greek_upsilonaccent" } },
    { XKB_KEY_Greek_upsilondieresis, 2, { "Greek_UPSILONdieresis", "Greek_upsilondieresis" } },
    { XKB_KEY_Greek_omegaaccent, 2, { "Greek_OMEGAaccent", "Greek_omegaaccent" } },
    { XKB_KEY_Greek_alpha, 2, { "Greek_ALPHA", "Greek_alpha" } },
    { XKB_KEY_Greek_beta, 2, { "Greek_BETA", "Greek_beta" } },
    { XKB_KEY_Greek_gamma, 2, { "Greek_GAMMA", "Greek_gamma" } },
    { XKB_KEY_Greek_delta, 2, { "Greek_DELTA", "Greek_delta" } },
    { XKB_KEY_Greek_epsilon, 2, { "Greek_EPSILON", "Greek_epsilon" } },
    { XKB_KEY_Greek_zeta, 2, { "Greek_ZETA", "Greek_zeta" } },
    { XKB_KEY_Greek_eta, 2, { "Greek_ETA", "Greek_eta" } },
    { XKB_KEY_Greek_theta, 2, { "Greek_THETA", "Greek_theta" } },
    { XKB_KEY_Greek_iota, 2, { "Greek_IOTA", "Greek_iota" } },
    { XKB_KEY_Greek_kappa, 2, { "Greek_KAPPA", "Greek_kappa" } },
    { XKB_KEY_Greek_lamda, 2, { "Greek_LAMDA", "Greek_lamda" } },
    { XKB_KEY_Greek_lambda, 2, { "Greek_LAMBDA", "Greek_lambda" } },
    { XKB_KEY_Greek_mu, 2, { "Greek_MU", "Greek_mu" } },
    { XKB_KEY_Greek_nu, 2, { "Greek_NU", "Greek_nu" } },
    { XKB_KEY_Greek_xi, 2, { "Greek_XI", "Greek_xi" } },
    { XKB_KEY_Greek_omicron, 2, { "Greek_OMICRON", "Greek_omicron" } },
    { XKB_KEY_Greek_pi, 2, { "Greek_PI", "Greek_pi" } },
    { XKB_KEY_Greek_rho, 2, { "Greek_RHO", "Greek_rho" } },
    { XKB_KEY_Greek_sigma, 2, { "Greek_SIGMA", "Greek_sigma" } },
    { XKB_KEY_Greek_tau, 2, { "Greek_TAU", "Greek_tau" } },
    { XKB_KEY_Greek_upsilon, 2, { "Greek_UPSILON", "Greek_upsilon" } },
    { XKB_KEY_Greek_phi, 2, { "Greek_PHI", "Greek_phi" } },
    { XKB_KEY_Greek_chi, 2, { "Greek_CHI", "Greek_chi" } },
    { XKB_KEY_Greek_psi, 2, { "Greek_PSI", "Greek_psi" } },
    { XKB_KEY_Greek_omega, 2, { "Greek_OMEGA", "Greek_omega" } },
    { XKB_KEY_Armenian_ayb, 2, { "Armenian_AYB", "Armenian_ayb" } },
    { XKB_KEY_Armenian_ben, 2, { "Armenian_BEN", "Armenian_ben" } },
    { XKB_KEY_Armenian_gim, 2, { "Armenian_GIM", "Armenian_gim" } },
    { XKB_KEY_Armenian_da, 2, { "Armenian_DA", "Armenian_da" } },
    { XKB_KEY_Armenian_yech, 2, { "Armenian_YECH", "Armenian_yech" } },
    { XKB_KEY_Armenian_za, 2, { "Armenian_ZA", "Armenian_za" } },
    { XKB_KEY_Armenian_e, 2, { "Armenian_E", "Armenian_e" } },
    { XKB_KEY_Armenian_at, 2, { "Armenian_AT", "Armenian_at" } },
    { XKB_KEY_Armenian_to, 2, { "Armenian_TO", "Armenian_to" } },
    { XKB_KEY_Armenian_zhe, 2, { "Armenian_ZHE", "Armenian_zhe" } },
    { XKB_KEY_Armenian_ini, 2, { "Armenian_INI", "Armenian_ini" } },
    { XKB_KEY_Armenian_lyun, 2, { "Armenian_LYUN", "Armenian_lyun" } },
    { XKB_KEY_Armenian_khe, 2, { "Armenian_KHE", "Armenian_khe" } },
    { XKB_KEY_Armenian_tsa, 2, { "Armenian_TSA", "Armenian_tsa" } },
    { XKB_KEY_Armenian_ken, 2, { "Armenian_KEN", "Armenian_ken" } },
    { XKB_KEY_Armenian_ho, 2, { "Armenian_HO", "Armenian_ho" } },
    { XKB_KEY_Armenian_dza, 2, { "Armenian_DZA", "Armenian_dza" } },
    { XKB_KEY_Armenian_ghat, 2, { "Armenian_GHAT", "Armenian_ghat" } },
    { XKB_KEY_Armenian_tche, 2, { "Armenian_TCHE", "Armenian_tche" } },
    { XKB_KEY_Armenian_men, 2, { "Armenian_MEN", "Armenian_men" } },
    { XKB_KEY_Armenian_hi, 2, { "Armenian_HI", "Armenian_hi" } },
    { XKB_KEY_Armenian_nu, 2, { "Armenian_NU", "Armenian_nu" } },
    { XKB_KEY_Armenian_sha, 2, { "Armenian_SHA", "Armenian_sha" } },
    { XKB_KEY_Armenian_vo, 2, { "Armenian_VO", "Armenian_vo" } },
    { XKB_KEY_Armenian_cha, 2, { "Armenian_CHA", "Armenian_cha" } },
    { XKB_KEY_Armenian_pe, 2, { "Armenian_PE", "Armenian_pe" } },
    { XKB_KEY_Armenian_je, 2, { "Armenian_JE", "Armenian_je" } },
    { XKB_KEY_Armenian_ra, 2, { "Armenian_RA", "Armenian_ra" } },
    { XKB_KEY_Armenian_se, 2, { "Armenian_SE", "Armenian_se" } },
    { XKB_KEY_Armenian_vev, 2, { "Armenian_VEV", "Armenian_vev" } },
    { XKB_KEY_Armenian_tyun, 2, { "Armenian_TYUN", "Armenian_tyun" } },
    { XKB_KEY_Armenian_re, 2, { "Armenian_RE", "Armenian_re" } },
    { XKB_KEY_Armenian_tso, 2, { "Armenian_TSO", "Armenian_tso" } },
    { XKB_KEY_Armenian_vyun, 2, { "Armenian_VYUN", "Armenian_vyun" } },
    { XKB_KEY_Armenian_pyur, 2, { "Armenian_PYUR", "Armenian_pyur" } },
    { XKB_KEY_Armenian_ke, 2, { "Armenian_KE", "Armenian_ke" } },
    { XKB_KEY_Armenian_o, 2, { "Armenian_O", "Armenian_o" } },
    { XKB_KEY_Armenian_fe, 2, { "Armenian_FE", "Armenian_fe" } },
    { XKB_KEY_xabovedot, 2, { "Xabovedot", "xabovedot" } },
    { XKB_KEY_ibreve, 2, { "Ibreve", "ibreve" } },
    { XKB_KEY_zstroke, 2, { "Zstroke", "zstroke" } },
    { XKB_KEY_gcaron, 2, { "Gcaron", "gcaron" } },
    { XKB_KEY_ocaron, 2, { "Ocaron", "ocaron" } },
    { XKB_KEY_obarred, 2, { "Obarred", "obarred" } },
    { XKB_KEY_schwa, 2, { "SCHWA", "schwa" } },
    { XKB_KEY_ezh, 2, { "EZH", "ezh" } },
    { XKB_KEY_lbelowdot, 2, { "Lbelowdot", "lbelowdot" } },
    { XKB_KEY_abelowdot, 2, { "Abelowdot", "abelowdot" } },
    { XKB_KEY_ahook, 2, { "Ahook", "ahook" } },
    { XKB_KEY_acircumflexacute, 2, { "Acircumflexacute", "acircumflexacute" } },
    { XKB_KEY_acircumflexgrave, 2, { "Acircumflexgrave", "acircumflexgrave" } },
    { XKB_KEY_acircumflexhook, 2, { "Acircumflexhook", "acircumflexhook" } },
    { XKB_KEY_acircumflextilde, 2, { "Acircumflextilde", "acircumflextilde" } },
    { XKB_KEY_acircumflexbelowdot, 2, { "Acircumflexbelowdot", "acircumflexbelowdot" } },
    { XKB_KEY_abreveacute, 2, { "Abreveacute", "abreveacute" } },
    { XKB_KEY_abrevegrave, 2, { "Abrevegrave", "abrevegrave" } },
    { XKB_KEY_abrevehook, 2, { "Abrevehook", "abrevehook" } },
    { XKB_KEY_abrevetilde, 2, { "Abrevetilde", "abrevetilde" } },
    { XKB_KEY_abrevebelowdot, 2, { "Abrevebelowdot", "abrevebelowdot" } },
    { XKB_KEY_ebelowdot, 2, { "Ebelowdot", "ebelowdot" } },
    { XKB_KEY_ehook, 2, { "Ehook", "ehook" } },
    { XKB_KEY_etilde, 2, { "Etilde", "etilde" } },
    { XKB_KEY_ecircumflexacute, 2, { "Ecircumflexacute", "ecircumflexacute" } },
    { XKB_KEY_ecircumflexgrave, 2, { "Ecircumflexgrave", "ecircumflexgrave" } },
    { XKB_KEY_ecircumflexhook, 2, { "Ecircumflexhook", "ecircumflexhook" } },
    { XKB_KEY_ecircumflextilde, 2, { "Ecircumflextilde", "ecircumflextilde" } },
    { XKB_KEY_ecircumflexbelowdot, 2, { "Ecircumflexbelowdot", "ecircumflexbelowdot" } },
    { XKB_KEY_ihook, 2, { "Ihook", "ihook" } },
    { XKB_KEY_ibelowdot, 2, { "Ibelowdot", "ibelowdot" } },
    { XKB_KEY_obelowdot, 2, { "Obelowdot", "obelowdot" } },
    { XKB_KEY_ohook, 2, { "Ohook", "ohook" } },
    { XKB_KEY_ocircumflexacute, 2, { "Ocircumflexacute", "ocircumflexacute" } },
    { XKB_KEY_ocircumflexgrave, 2, { "Ocircumflexgrave", "ocircumflexgrave" } },
    { XKB_KEY_ocircumflexhook, 2, { "Ocircumflexhook", "ocircumflexhook" } },
    { XKB_KEY_ocircumflextilde, 2, { "Ocircumflextilde", "ocircumflextilde" } },
    { XKB_KEY_ocircumflexbelowdot, 2, { "Ocircumflexbelowdot", "ocircumflexbelowdot" } },
    { XKB_KEY_ohornacute, 2, { "Ohornacute", "ohornacute" } },
    { XKB_KEY_ohorngrave, 2, { "Ohorngrave", "ohorngrave" } },
    { XKB_KEY_ohornhook, 2, { "Ohornhook", "ohornhook" } },
    { XKB_KEY_ohorntilde, 2, { "Ohorntilde", "ohorntilde" } },
    { XKB_KEY_ohornbelowdot, 2, { "Ohornbelowdot", "ohornbelowdot" } },
    { XKB_KEY_ubelowdot, 2, { "Ubelowdot", "ubelowdot" } },
    { XKB_KEY_uhook, 2, { "Uhook", "uhook" } },
    { XKB_KEY_uhornacute, 2, { "Uhornacute", "uhornacute" } },
    { XKB_KEY_uhorngrave, 2, { "Uhorngrave", "uhorngrave" } },
    { XKB_KEY_uhornhook, 2, { "Uhornhook", "uhornhook" } },
    { XKB_KEY_uhorntilde, 2, { "Uhorntilde", "uhorntilde" } },
    { XKB_KEY_uhornbelowdot, 2, { "Uhornbelowdot", "uhornbelowdot" } },
    { XKB_KEY_ybelowdot, 2, { "Ybelowdot", "ybelowdot" } },
    { XKB_KEY_yhook, 2, { "Yhook", "yhook" } },
    { XKB_KEY_ytilde, 2, { "Ytilde", "ytilde" } },
    { XKB_KEY_ohorn, 2, { "Ohorn", "ohorn" } },
    { XKB_KEY_uhorn, 2, { "Uhorn", "uhorn" } },
    { XKB_KEY_XF86Screensaver, 2, { "XF86ScreenSaver", "XF86Screensaver" } }
};

#endif
