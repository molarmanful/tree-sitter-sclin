let js = require('@eslint/js')
let prettier = require('eslint-config-prettier')
let imprt = require('eslint-plugin-import')
let globals = require('globals')

module.exports = [
  {
    ignores: [
      '.svelte-kit/**/*',

      'build/**/*',
      '.DS_Store',
      'node_modules',
      '/build',
      '/.svelte-kit',
      '/package',
      '.env',
      '.env.*',
      '!.env.example',
      'pnpm-lock.yaml',

      'package-lock.json',
      'yarn.lock',
    ],
  },

  js.configs.recommended,

  {
    languageOptions: {
      parserOptions: {
        ecmaVersion: 'latest',
        sourceType: 'module',
      },
    },
  },

  {
    languageOptions: {
      globals: {
        ...globals.node,
        ...globals.browser,
      },
    },
    plugins: {
      import: imprt,
    },
    settings: {
      'import/parsers': {
        espree: ['.js'],
      },
    },
    rules: {
      'import/export': 2,
      'import/no-duplicates': 1,
      'import/order': [
        1,
        {
          alphabetize: {
            order: 'asc',

            caseInsensitive: true,
          },
          'newlines-between': 'always',
        },
      ],
      'sort-imports': [
        1,
        {
          ignoreDeclarationSort: true,
        },
      ],
    },
  },

  {
    languageOptions: {
      ecmaVersion: 'latest',
      sourceType: 'module',
      globals: {
        ...globals.node,
        ...globals.browser,
      },
    },
    rules: {
      'no-unused-vars': 1,
    },
  },

  prettier,
]
