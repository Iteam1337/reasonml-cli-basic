let args = Sys.argv;

/* Logging library: https://reason-native.com/docs/console/ */
Cli.run(~args) |> Console.log;
