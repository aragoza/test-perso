#include "total.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 *
 *
 *
 *
 *
 *
 *
*/

int wait_for_line(void)
{
    char *buffer;
    size_t len;
    ssize_t read;

    printf("$ ");

    if ((read = getline(&buffer, &len, stdin)) != -1)
    {
        printf("Line length: %lu\n", read);
        printf("Content: %s", buffer);
    }

    else
    {
        free(buffer);
        return (-1);
    }

    free(buffer);

    return (0);
}
