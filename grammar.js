let rsv = `[^\\s\\d".]`
let rsx = `[^\\s\\d".A-Za-z]`

let pfx = (x, r = rsv) => new RegExp(`${x + r}+`)

module.exports = grammar({
  name: 'sclin',

  rules: {
    source_file: $ => repeat($._expression),
    _expression: $ => choice($.str, $.num, $._cmd),

    str: () => /"([^"\\]|\\.)*"/,
    num: () => /\d*\.\d+|\d+/,

    _cmd: $ => choice($.dot, $.hash, $.esc, $.mstr, $.brack, $.word, $.cmd),

    dot: () => '.',
    brack: () => /[(\[{}\])]+/,
    hash: () => pfx('#'),
    esc: () => pfx('\\\\'),
    mstr: () => pfx('"'),
    word: () => /[A-Za-z]+/,
    cmd: () => pfx('', rsx),
  },
})
