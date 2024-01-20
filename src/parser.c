#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DASH = 1,
  anon_sym_PLUS = 2,
  anon_sym_DOT = 3,
  sym__pre_release_identifier = 4,
  sym__alphanumeric_identifier = 5,
  sym__numeric_identifier = 6,
  sym_semver = 7,
  sym_core = 8,
  sym_major = 9,
  sym_minor = 10,
  sym_patch = 11,
  sym_pre_release = 12,
  sym_build = 13,
  aux_sym_pre_release_repeat1 = 14,
  aux_sym_build_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOT] = ".",
  [sym__pre_release_identifier] = "_pre_release_identifier",
  [sym__alphanumeric_identifier] = "_alphanumeric_identifier",
  [sym__numeric_identifier] = "_numeric_identifier",
  [sym_semver] = "semver",
  [sym_core] = "core",
  [sym_major] = "major",
  [sym_minor] = "minor",
  [sym_patch] = "patch",
  [sym_pre_release] = "pre_release",
  [sym_build] = "build",
  [aux_sym_pre_release_repeat1] = "pre_release_repeat1",
  [aux_sym_build_repeat1] = "build_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__pre_release_identifier] = sym__pre_release_identifier,
  [sym__alphanumeric_identifier] = sym__alphanumeric_identifier,
  [sym__numeric_identifier] = sym__numeric_identifier,
  [sym_semver] = sym_semver,
  [sym_core] = sym_core,
  [sym_major] = sym_major,
  [sym_minor] = sym_minor,
  [sym_patch] = sym_patch,
  [sym_pre_release] = sym_pre_release,
  [sym_build] = sym_build,
  [aux_sym_pre_release_repeat1] = aux_sym_pre_release_repeat1,
  [aux_sym_build_repeat1] = aux_sym_build_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__pre_release_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__alphanumeric_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_semver] = {
    .visible = true,
    .named = true,
  },
  [sym_core] = {
    .visible = true,
    .named = true,
  },
  [sym_major] = {
    .visible = true,
    .named = true,
  },
  [sym_minor] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_release] = {
    .visible = true,
    .named = true,
  },
  [sym_build] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pre_release_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_build_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__pre_release_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__pre_release_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__pre_release_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__alphanumeric_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__numeric_identifier);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__numeric_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__numeric_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_semver] = STATE(27),
    [sym_core] = STATE(7),
    [sym_major] = STATE(26),
    [sym__numeric_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_pre_release_repeat1,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [11] = 3,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_pre_release_repeat1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [22] = 3,
    ACTIONS(7), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_pre_release_repeat1,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [33] = 1,
    ACTIONS(16), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
  [39] = 1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
  [45] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_DASH,
    ACTIONS(24), 1,
      anon_sym_PLUS,
  [55] = 3,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_build_repeat1,
  [65] = 1,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DOT,
  [71] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_build_repeat1,
  [81] = 3,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_build_repeat1,
  [91] = 2,
    ACTIONS(37), 1,
      sym__alphanumeric_identifier,
    STATE(24), 1,
      sym_build,
  [98] = 2,
    ACTIONS(37), 1,
      sym__alphanumeric_identifier,
    STATE(25), 1,
      sym_build,
  [105] = 2,
    ACTIONS(39), 1,
      sym__numeric_identifier,
    STATE(5), 1,
      sym_patch,
  [112] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_PLUS,
  [119] = 2,
    ACTIONS(45), 1,
      sym__numeric_identifier,
    STATE(20), 1,
      sym_minor,
  [126] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [131] = 2,
    ACTIONS(47), 1,
      sym__pre_release_identifier,
    STATE(15), 1,
      sym_pre_release,
  [138] = 1,
    ACTIONS(49), 1,
      anon_sym_DOT,
  [142] = 1,
    ACTIONS(51), 1,
      anon_sym_DOT,
  [146] = 1,
    ACTIONS(53), 1,
      sym__pre_release_identifier,
  [150] = 1,
    ACTIONS(55), 1,
      anon_sym_DOT,
  [154] = 1,
    ACTIONS(57), 1,
      sym__alphanumeric_identifier,
  [158] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [162] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [166] = 1,
    ACTIONS(61), 1,
      anon_sym_DOT,
  [170] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 65,
  [SMALL_STATE(10)] = 71,
  [SMALL_STATE(11)] = 81,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 126,
  [SMALL_STATE(18)] = 131,
  [SMALL_STATE(19)] = 138,
  [SMALL_STATE(20)] = 142,
  [SMALL_STATE(21)] = 146,
  [SMALL_STATE(22)] = 150,
  [SMALL_STATE(23)] = 154,
  [SMALL_STATE(24)] = 158,
  [SMALL_STATE(25)] = 162,
  [SMALL_STATE(26)] = 166,
  [SMALL_STATE(27)] = 170,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_release, 2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pre_release_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pre_release_repeat1, 2), SHIFT_REPEAT(21),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_release, 1),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minor, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_major, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_semver(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
