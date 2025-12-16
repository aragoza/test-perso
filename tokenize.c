#include "total.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
    char *str, *my_ptr;
    int i;

    if (argc == 0)
        return (-1);

    while (argv[i] != NULL)
    {
        strcat(str, argv[i]);
        i++;
    }
    

    my_ptr = strtok(str, " ");

    i = 0;
    while (my_ptr != NULL)
    {
        my_ptr = strtok(NULL, " ");
        printf("Token : %s\n", my_ptr);
        i++;
    }

    return (0);
}
