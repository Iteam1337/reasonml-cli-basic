let run = (~args) => {
  /* A collection of std-library functions */
  let firstRealArg =
    Tablecloth.(
      args
      |> Array.get(~index=1)
      |> Option.withDefault(~default="No arguments passed.")
    );

  /* A JSX-like text-formatting library:
     https://reason-native.com/docs/pastel/ */
  Pastel.(
    <Pastel italic=true color=Green>
      "Hello "
      <Pastel underline=true color=Cyan> {firstRealArg ++ "!"} </Pastel>
    </Pastel>
  );
};
