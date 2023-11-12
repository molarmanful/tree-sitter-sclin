# tree-sitter-sclin

[sclin](https://github.com/molarmanful/sclin) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Notes

sclin, by nature, is rather gnarly to parse for semantic analysis. Here, the
simplicity and dynamic of sclin has come back to bite me:

- sclin's parser is simple and recognizes 3 types: numbers, strings, and
  commands. sclin relies on the interpreter to construct and handle everything
  else, including the more complex types and control flow.
- sclin executes line-by-line; lines may be functions, strings, or even comments
  depending on how other parts of the program retrieve them.
- sclin doesn't care if you decide to overwrite builtins; even "essential"
  builtins like `;` (execute next line) are subject to change.

After some rough brainstorming and self-reflection, my current conclusion is
that a fully faithful tree-sitter grammar would require me to spend more time
than I'd like on this part of the language... at least for now. This current
implementation - although rudimentary - should still provide useful visual cues
to aid programming.
