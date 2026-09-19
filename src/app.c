#include "../lib/include/bashLibery.h"

void shell_line() {
    char *line;
    while (1) {
        line = readline("bash$ ");
        if (!line) break;
        add_history(line);
        free(line);
    }
}

int main(int ac, char **av, char **env) {
    if (ac < 2) return (1);
    t_shell *shell;
    (void)av;
    shell = malloc(sizeof(t_shell));
    init_env(&shell, env);
    shell_line();
    return (0);
}