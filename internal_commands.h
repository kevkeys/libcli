﻿int cli_int_enable(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_disable(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_help(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_history(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_quit(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_exit(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_configure_terminal(struct cli_def *cli, char *command, char *argv[], int);
int cli_int_terminal_length(struct cli_def *cli, char *command, char *argv[], int);
int cli_show_help(struct cli_def *cli, struct cli_command *c);
int cli_int_idle_timeout(struct cli_def *cli);