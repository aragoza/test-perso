#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "total.h"

int main(void)
{
    char *line = NULL;
    char **args;

    while (1)
    {
        line = wait_for_line();
        if (!line)
            break;

        args = tokenize_a_sentence(line, " \t\n");
        if (!args || !args[0])
        {
            free_tokens(args);
            free(line);
            continue;
        }

        execute_command(args);

        free_tokens(args);
        free(line);
    }

    return (0);
}


void execute_command(char **args)
{
    pid_t pid;
    int status;

    pid = fork();
    if (pid == 0)
    {
        if (execvp(args[0], args) == -1)
        {
            perror("Error executing command");
            exit(EXIT_FAILURE);
        }
    }
    else if (pid < 0)
    {
        perror("Forking error");
    }
    else
    {
        waitpid(pid, &status, 0);
    }
}

int waitpid(pid_t pid, int *status, int options)
{
    return waitpid(pid, status, options);
}
