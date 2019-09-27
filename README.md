# reasonml-cli-basic

A basic CLI example, built with ReasonML.

## Getting started

Clone this repository and `cd` into it.

```sh
npm i -g esy@latest
esy
esy start <yourName>
esy test
```

## Folder structure

| File                         | Description                                                                                                          |
| ---------------------------- | -------------------------------------------------------------------------------------------------------------------- |
| [esy.json](esy.json)         | If you're used to a NPM-like worfklow, `esy.json` is your `package.json` and specifies all dependencies and scripts. |
| [\*/dune](src/dune)          | The build system. Specify dependencies and more. [Docs](https://dune.readthedocs.io).                                |
| [src/cli.re](src/cli.re)     | Our main library (dune). It's specified as a library to be able to be used for the tests as well.                    |
| [bin/app.re](bin/app.re)     | Our main executable (dune). Uses our own made `cli`-library.                                                         |
| [tests/cli.re](tests/cli.re) | Our only test file (dune). Uses our own made `cli`-library and OCaml-library `alcotest` as our testrunner.           |

## Dependencies

- [Alcotest (OCaml)](https://github.com/mirage/alcotest) - Test runner
- [Pastel (ReasonML)](https://reason-native.com/docs/pastel) - JSX-like text-coloring and text-formatting
- [Console (ReasonML)](https://reason-native.com/docs/console) - Javascript-like logger
- [Refmterr (ReasonML)](https://reason-native.com/docs/refmterr/) - Pretty printing for error-messages
- [Tablecloth (Reasonml/OCaml)](https://github.com/darklang/tablecloth) - One of a few base-libraries
