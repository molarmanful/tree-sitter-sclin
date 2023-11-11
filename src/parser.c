#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_str = 1,
  sym_num = 2,
  sym_dot = 3,
  sym_hash = 4,
  sym_esc = 5,
  sym_mstr = 6,
  sym_vardef = 7,
  sym_var = 8,
  sym_brack = 9,
  sym_cmd = 10,
  sym_word = 11,
  sym_source_file = 12,
  sym__expression = 13,
  sym__cmd = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_str] = "str",
  [sym_num] = "num",
  [sym_dot] = "dot",
  [sym_hash] = "hash",
  [sym_esc] = "esc",
  [sym_mstr] = "mstr",
  [sym_vardef] = "vardef",
  [sym_var] = "var",
  [sym_brack] = "brack",
  [sym_cmd] = "cmd",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__cmd] = "_cmd",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_str] = sym_str,
  [sym_num] = sym_num,
  [sym_dot] = sym_dot,
  [sym_hash] = sym_hash,
  [sym_esc] = sym_esc,
  [sym_mstr] = sym_mstr,
  [sym_vardef] = sym_vardef,
  [sym_var] = sym_var,
  [sym_brack] = sym_brack,
  [sym_cmd] = sym_cmd,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__cmd] = sym__cmd,
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
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_esc] = {
    .visible = true,
    .named = true,
  },
  [sym_mstr] = {
    .visible = true,
    .named = true,
  },
  [sym_vardef] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_brack] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_hash);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_esc);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_mstr);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_mstr);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_vardef);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_brack);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(11);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(12);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5, .external_lex_state = 1},
  [2] = {.lex_state = 5, .external_lex_state = 1},
  [3] = {.lex_state = 5, .external_lex_state = 1},
  [4] = {.lex_state = 0},
};

enum {
  ts_external_token_word = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_word] = sym_word,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_word] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_esc] = ACTIONS(1),
    [sym_mstr] = ACTIONS(1),
    [sym_vardef] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
    [sym_brack] = ACTIONS(1),
    [sym_cmd] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [sym__expression] = STATE(2),
    [sym__cmd] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_str] = ACTIONS(5),
    [sym_num] = ACTIONS(5),
    [sym_dot] = ACTIONS(7),
    [sym_hash] = ACTIONS(5),
    [sym_esc] = ACTIONS(5),
    [sym_vardef] = ACTIONS(5),
    [sym_var] = ACTIONS(5),
    [sym_brack] = ACTIONS(7),
    [sym_cmd] = ACTIONS(7),
    [sym_word] = ACTIONS(5),
  },
  [2] = {
    [sym__expression] = STATE(3),
    [sym__cmd] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_str] = ACTIONS(11),
    [sym_num] = ACTIONS(11),
    [sym_dot] = ACTIONS(13),
    [sym_hash] = ACTIONS(11),
    [sym_esc] = ACTIONS(11),
    [sym_vardef] = ACTIONS(11),
    [sym_var] = ACTIONS(11),
    [sym_brack] = ACTIONS(13),
    [sym_cmd] = ACTIONS(13),
    [sym_word] = ACTIONS(11),
  },
  [3] = {
    [sym__expression] = STATE(3),
    [sym__cmd] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_str] = ACTIONS(17),
    [sym_num] = ACTIONS(17),
    [sym_dot] = ACTIONS(20),
    [sym_hash] = ACTIONS(17),
    [sym_esc] = ACTIONS(17),
    [sym_vardef] = ACTIONS(17),
    [sym_var] = ACTIONS(17),
    [sym_brack] = ACTIONS(20),
    [sym_cmd] = ACTIONS(20),
    [sym_word] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [23] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sclin_external_scanner_create(void);
void tree_sitter_sclin_external_scanner_destroy(void *);
bool tree_sitter_sclin_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sclin_external_scanner_serialize(void *, char *);
void tree_sitter_sclin_external_scanner_deserialize(void *, const char *, unsigned);

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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_sclin_external_scanner_create,
      tree_sitter_sclin_external_scanner_destroy,
      tree_sitter_sclin_external_scanner_scan,
      tree_sitter_sclin_external_scanner_serialize,
      tree_sitter_sclin_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
