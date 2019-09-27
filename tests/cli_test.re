open Alcotest;
open Pastel;

let helloIteamers = () => {
  let payload = [|"noop", "Iteamers"|];

  let expected =
    <Pastel italic=true color=Green>
      "Hello "
      <Pastel underline=true color=Cyan> {"Iteamers" ++ "!"} </Pastel>
    </Pastel>;

  check(string, "hello", Cli.run(~args=payload), expected);
};

let cliTest = ("CLI", [test_case("runs", `Quick, helloIteamers)]);

let () = {
  run("CLI", [cliTest]);
};
