module.exports = grammar({
  name: 'semver',

  rules: {
    semver: ($) => seq(
      $.core,
      optional(seq('-', $.pre_release)),
      optional(seq('+', $.build)),
    ),
    core: ($) => seq($.major, '.', $.minor, '.', $.patch),
    major: ($) => $._numeric_identifier,
    minor: ($) => $._numeric_identifier,
    patch: ($) => $._numeric_identifier,
    pre_release: ($) => sep1($._pre_release_identifier, '.'),
    build: ($) => sep1($._alphanumeric_identifier, '.'),
    _pre_release_identifier: ($) => /0|[1-9]\d*|\d*[a-zA-Z\-][\da-zA-Z\-]*/,
    _alphanumeric_identifier: ($) => /[\da-zA-Z\-]+/,
    _numeric_identifier: ($) => /(0|[1-9]\d*)/,
  },
});

// eslint-disable-next-line require-jsdoc
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
