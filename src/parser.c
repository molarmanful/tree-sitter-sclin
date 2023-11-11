#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 2

enum {
  sym_str = 1,
  sym_num = 2,
  sym_dot = 3,
  anon_sym_POUND = 4,
  anon_sym_BSLASH_BSLASH = 5,
  aux_sym_def_token1 = 6,
  aux_sym_var_token1 = 7,
  anon_sym_BQUOTE = 8,
  sym_brack = 9,
  sym_word = 10,
  sym_cmd = 11,
  sym_name = 12,
  sym_source_file = 13,
  sym__expression = 14,
  sym__cmd = 15,
  sym_hash = 16,
  sym_esc = 17,
  sym_def = 18,
  sym_var = 19,
  sym_mstr = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_str] = "str",
  [sym_num] = "num",
  [sym_dot] = "dot",
  [anon_sym_POUND] = "#",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_def_token1] = "def_token1",
  [aux_sym_var_token1] = "var_token1",
  [anon_sym_BQUOTE] = "`",
  [sym_brack] = "brack",
  [sym_word] = "word",
  [sym_cmd] = "cmd",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__cmd] = "_cmd",
  [sym_hash] = "hash",
  [sym_esc] = "esc",
  [sym_def] = "def",
  [sym_var] = "var",
  [sym_mstr] = "mstr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_str] = sym_str,
  [sym_num] = sym_num,
  [sym_dot] = sym_dot,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_def_token1] = aux_sym_def_token1,
  [aux_sym_var_token1] = aux_sym_var_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_brack] = sym_brack,
  [sym_word] = sym_word,
  [sym_cmd] = sym_cmd,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__cmd] = sym__cmd,
  [sym_hash] = sym_hash,
  [sym_esc] = sym_esc,
  [sym_def] = sym_def,
  [sym_var] = sym_var,
  [sym_mstr] = sym_mstr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_def_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_brack] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__cmd] = {
    .visible = false,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_esc] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_mstr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
};

static inline bool sym_cmd_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < 'A'
      ? (c < '0'
        ? c == '.'
        : c <= '9')
      : (c <= 'Z' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_def_token1);
      if (lookahead == '$') ADVANCE(13);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_def_token1);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_var_token1);
      if (lookahead == '$') ADVANCE(15);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_var_token1);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_brack);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '$') ADVANCE(12);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\\') ADVANCE(11);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_cmd);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(22);
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
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [aux_sym_def_token1] = ACTIONS(1),
    [aux_sym_var_token1] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_brack] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_cmd] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__expression] = STATE(2),
    [sym__cmd] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_esc] = STATE(2),
    [sym_def] = STATE(2),
    [sym_var] = STATE(2),
    [sym_mstr] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_str] = ACTIONS(5),
    [sym_num] = ACTIONS(5),
    [sym_dot] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(11),
    [aux_sym_def_token1] = ACTIONS(13),
    [aux_sym_var_token1] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [sym_brack] = ACTIONS(7),
    [sym_word] = ACTIONS(5),
    [sym_cmd] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(3),
    [sym__cmd] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_esc] = STATE(3),
    [sym_def] = STATE(3),
    [sym_var] = STATE(3),
    [sym_mstr] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_str] = ACTIONS(21),
    [sym_num] = ACTIONS(21),
    [sym_dot] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(11),
    [aux_sym_def_token1] = ACTIONS(13),
    [aux_sym_var_token1] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [sym_brack] = ACTIONS(23),
    [sym_word] = ACTIONS(21),
    [sym_cmd] = ACTIONS(23),
  },
  [3] = {
    [sym__expression] = STATE(3),
    [sym__cmd] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_esc] = STATE(3),
    [sym_def] = STATE(3),
    [sym_var] = STATE(3),
    [sym_mstr] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_str] = ACTIONS(27),
    [sym_num] = ACTIONS(27),
    [sym_dot] = ACTIONS(30),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(36),
    [aux_sym_def_token1] = ACTIONS(39),
    [aux_sym_var_token1] = ACTIONS(42),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [sym_brack] = ACTIONS(30),
    [sym_word] = ACTIONS(27),
    [sym_cmd] = ACTIONS(30),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_str] = ACTIONS(48),
    [sym_num] = ACTIONS(48),
    [sym_dot] = ACTIONS(50),
    [anon_sym_POUND] = ACTIONS(50),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(50),
    [aux_sym_def_token1] = ACTIONS(50),
    [aux_sym_var_token1] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(50),
    [sym_brack] = ACTIONS(50),
    [sym_word] = ACTIONS(48),
    [sym_cmd] = ACTIONS(50),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_str] = ACTIONS(52),
    [sym_num] = ACTIONS(52),
    [sym_dot] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(54),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(54),
    [aux_sym_def_token1] = ACTIONS(54),
    [aux_sym_var_token1] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [sym_brack] = ACTIONS(54),
    [sym_word] = ACTIONS(52),
    [sym_cmd] = ACTIONS(54),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_str] = ACTIONS(56),
    [sym_num] = ACTIONS(56),
    [sym_dot] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(58),
    [aux_sym_def_token1] = ACTIONS(58),
    [aux_sym_var_token1] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [sym_brack] = ACTIONS(58),
    [sym_word] = ACTIONS(56),
    [sym_cmd] = ACTIONS(58),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_str] = ACTIONS(60),
    [sym_num] = ACTIONS(60),
    [sym_dot] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(62),
    [aux_sym_def_token1] = ACTIONS(62),
    [aux_sym_var_token1] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [sym_brack] = ACTIONS(62),
    [sym_word] = ACTIONS(60),
    [sym_cmd] = ACTIONS(62),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_str] = ACTIONS(64),
    [sym_num] = ACTIONS(64),
    [sym_dot] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(66),
    [aux_sym_def_token1] = ACTIONS(66),
    [aux_sym_var_token1] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [sym_brack] = ACTIONS(66),
    [sym_word] = ACTIONS(64),
    [sym_cmd] = ACTIONS(66),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(68), 1,
      sym_name,
  [4] = 1,
    ACTIONS(70), 1,
      sym_name,
  [8] = 1,
    ACTIONS(72), 1,
      sym_name,
  [12] = 1,
    ACTIONS(74), 1,
      sym_name,
  [16] = 1,
    ACTIONS(76), 1,
      sym_name,
  [20] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 4,
  [SMALL_STATE(11)] = 8,
  [SMALL_STATE(12)] = 12,
  [SMALL_STATE(13)] = 16,
  [SMALL_STATE(14)] = 20,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc, 2, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 2, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 2, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 2, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mstr, 2, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mstr, 2, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sclin(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
