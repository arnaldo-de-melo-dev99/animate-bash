#include "bashLibery.h"

void init_env(t_shell **shell, char **env)
{
    int i = -1;
    *shell = (t_shell *)malloc(sizeof(t_shell));
    (*shell)->env = malloc(sizeof(char *) * (count_env(env) + 1));
    if (!*shell)
    {
        perror("Failed to allocate memory for shell");
        exit(EXIT_FAILURE);
    }
    if ((*shell)->env)
    {
        while (*env)
        {
            (*shell)->env[++i] = ft_strdup(*env);
            env++;
        }
        (*shell)->env[i + 1] = NULL;
    }
    (*shell)->line = NULL;
}