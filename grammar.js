let rsv = `[^\\s\\d".]+`
let rsx = `[^\\s\\d".A-Za-z]+`

let prefix = (x, r = rsv) => new RegExp(x + r)
let seqpfx = ($, x) => seq(x, field('name', $.name))

module.exports = grammar({
  name: 'sclin',

  rules: {
    source_file: $ => repeat($._expression),
    _expression: $ => choice($.str, $.num, $._cmd),

    str: () => /"([^"\\]|\\.)*"/,
    num: () => /\d*\.\d+|\d+/,

    _cmd: $ =>
      choice(
        $.dot,
        $.hash,
        $.esc,
        $.def,
        $.var,
        $.mstr,
        $.brack,
        $.word,
        $.cmd
      ),

    dot: () => '.',

    hash: $ => seqpfx($, '#'),
    esc: $ => seqpfx($, '\\\\'),
    def: $ => seqpfx($, /=\${1,2}/),
    var: $ => seqpfx($, /\${1,2}/),
    mstr: $ => seqpfx($, '`'),

    brack: () => /[()\[\]{})]+/,

    word: () => /[A-Za-z]+/,
    cmd: () => prefix('', rsx),

    name: () => token.immediate(field('name', prefix(''))),
  },
})
