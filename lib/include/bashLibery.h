#ifndef BASHLIBERY_H
#define BASHLIBERY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include <readline/readline.h>
#include <readline/history.h>

typedef struct s_shell
{
    char **env;
    char *line;
} t_shell;

void    init_env(t_shell **shell, char **env);

#endif // BASHLIBERY_H