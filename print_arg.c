#include <stdio.h>
#include "total.h"

int print_arg(int argc, char **argv)
{
    int i = 0;
    (void)argc;

    while (argv[i] != NULL)
    {
        printf("%s\n", argv[i]);
        i++;
    }

    return (0);
}
