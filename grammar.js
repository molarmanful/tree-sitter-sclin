let rsv = `[^\\s\\d".]+`
let rsx = `[^\\s\\d".A-Za-z]+`

let ti = token.immediate
let pfx = (x, r = rsv) => new RegExp(x + r)

module.exports = grammar({
  name: 'sclin',

  rules: {
    source_file: $ => repeat($._expression),
    _expression: $ => choice($.str, $.num, $._cmd),

    str: () => /"([^"\\]|\\.)*"?/,
    num: () => /\d*\.\d+|\d+/,

    _cmd: $ =>
      choice(
        $.dot,
        $.hash,
        $._spec,
        alias($.prefix, $.cmd),
        $.brack,
        $.word,
        $.cmd
      ),

    dot: () => ti('.'),
    hash: () => pfx('#'),
    _spec: $ => seq($.prefix, $.name),

    prefix: () => /\\|=\$|\$|`/,
    brack: () => /[()\[\]{})]+/,
    word: () => /[A-Za-z]+/,

    cmd: () => token(prec(-1, RegExp(rsx))),

    name: () => ti(RegExp(rsv)),
  },
})
