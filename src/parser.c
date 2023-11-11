#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 2

enum {
  sym_str = 1,
  sym_num = 2,
  sym_dot = 3,
  sym_hash = 4,
  sym_prefix = 5,
  sym_brack = 6,
  sym_word = 7,
  sym_cmd = 8,
  sym_name = 9,
  sym_source_file = 10,
  sym__expression = 11,
  sym__cmd = 12,
  sym__spec = 13,
  aux_sym_source_file_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_str] = "str",
  [sym_num] = "num",
  [sym_dot] = "dot",
  [sym_hash] = "hash",
  [sym_prefix] = "prefix",
  [sym_brack] = "brack",
  [sym_word] = "word",
  [sym_cmd] = "cmd",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__cmd] = "_cmd",
  [sym__spec] = "_spec",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_str] = sym_str,
  [sym_num] = sym_num,
  [sym_dot] = sym_dot,
  [sym_hash] = sym_hash,
  [sym_prefix] = sym_prefix,
  [sym_brack] = sym_brack,
  [sym_word] = sym_word,
  [sym_cmd] = sym_cmd,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__cmd] = sym__cmd,
  [sym__spec] = sym__spec,
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
  [sym_prefix] = {
    .visible = true,
    .named = true,
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
  [sym__spec] = {
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
  [1] = {
    [0] = sym_cmd,
  },
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
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(21);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 3:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(13);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(13);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(1);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
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
      ACCEPT_TOKEN(sym_hash);
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
      ACCEPT_TOKEN(sym_prefix);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_brack);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '$') ADVANCE(13);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_cmd);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(11);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_cmd);
      if (!sym_cmd_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '$') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_prefix] = ACTIONS(1),
    [sym_brack] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_cmd] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__expression] = STATE(2),
    [sym__cmd] = STATE(2),
    [sym__spec] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_str] = ACTIONS(5),
    [sym_num] = ACTIONS(5),
    [sym_dot] = ACTIONS(7),
    [sym_hash] = ACTIONS(5),
    [sym_prefix] = ACTIONS(9),
    [sym_brack] = ACTIONS(5),
    [sym_word] = ACTIONS(5),
    [sym_cmd] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(3),
    [sym__cmd] = STATE(3),
    [sym__spec] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_str] = ACTIONS(13),
    [sym_num] = ACTIONS(13),
    [sym_dot] = ACTIONS(15),
    [sym_hash] = ACTIONS(13),
    [sym_prefix] = ACTIONS(9),
    [sym_brack] = ACTIONS(13),
    [sym_word] = ACTIONS(13),
    [sym_cmd] = ACTIONS(15),
  },
  [3] = {
    [sym__expression] = STATE(3),
    [sym__cmd] = STATE(3),
    [sym__spec] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_str] = ACTIONS(19),
    [sym_num] = ACTIONS(19),
    [sym_dot] = ACTIONS(22),
    [sym_hash] = ACTIONS(19),
    [sym_prefix] = ACTIONS(25),
    [sym_brack] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
    [sym_cmd] = ACTIONS(22),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_str] = ACTIONS(28),
    [sym_num] = ACTIONS(28),
    [sym_dot] = ACTIONS(30),
    [sym_hash] = ACTIONS(30),
    [sym_prefix] = ACTIONS(30),
    [sym_brack] = ACTIONS(30),
    [sym_word] = ACTIONS(30),
    [sym_cmd] = ACTIONS(30),
    [sym_name] = ACTIONS(32),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_str] = ACTIONS(34),
    [sym_num] = ACTIONS(34),
    [sym_dot] = ACTIONS(36),
    [sym_hash] = ACTIONS(34),
    [sym_prefix] = ACTIONS(34),
    [sym_brack] = ACTIONS(34),
    [sym_word] = ACTIONS(34),
    [sym_cmd] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cmd, 1, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cmd, 1, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spec, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spec, 2),
  [38] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
