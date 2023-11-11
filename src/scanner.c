#include "tree_sitter/parser.h"
#include <ctype.h>
#include <stdbool.h>

enum TokenType {
  WORD,
};

void *tree_sitter_sclin_external_scanner_create() { return NULL; }

void tree_sitter_sclin_external_scanner_destroy(void *pl) {}

unsigned tree_sitter_sclin_external_scanner_serialize(void *pl, char *buf) {
  return 0;
}

void tree_sitter_sclin_external_scanner_deserialize(void *pl, const char *buf,
                                                    unsigned len) {}

bool tree_sitter_sclin_external_scanner_scan(void *pl, TSLexer *lex,
                                             const bool *valid) {

  if (!valid[WORD])
    return false;

  while (lex->lookahead == ' ' || lex->lookahead == '\t' ||
         lex->lookahead == '\n') {
    lex->advance(lex, true);
  }

  if (!isalpha(lex->lookahead))
    return false;

  int lc = 0;
  int tc = 0;

  while (lex->lookahead) {
    if (isalpha(lex->lookahead))
      lc++;
    tc++;
    lex->advance(lex, false);
  }

  if (tc > 0 && lc > tc / 2) {
    lex->result_symbol = WORD;
    return true;
  }

  return false;
}
