let rsv = `[^\\s\\d".]`

let pfx = x => new RegExp(`${x + rsv}+`)

module.exports = grammar({
  name: 'sclin',

  externals: $ => [$.word],

  rules: {
    source_file: $ => repeat($._expression),
    _expression: $ => choice($.str, $.num, $.dot, $._cmd),

    str: () => /"([^"\\]|\\.)*"/,
    num: () => /\d*\.\d+|\d+/,
    dot: () => '.',

    _cmd: $ => choice($.hash, $.esc, $.vardef, $.var, $.brack, $.word, $.cmd),

    // hash: () => /#[^\s\d'.]+/,
    hash: () => pfx('#'),
    esc: () => pfx('\\\\'),
    mstr: () => pfx('"'),
    vardef: () => pfx('=\\$'),
    var: () => pfx('\\$'),
    brack: () => new RegExp(`${rsv}*[(\\[{}\\])]${rsv}*`),
    cmd: () => pfx(''),
  },
})
