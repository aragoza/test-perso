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


int tokenize_a_sentence(int number_arg, char *arguments[])
{
    char *my_ptr;
    char str[1024] = "";
    int i;

    for (i = 1; i < number_arg; i++)
    {
        strcat(str, arguments[i]);
        strcat(str, " ");
    }

    my_ptr = strtok(str, "=");

    while (my_ptr != NULL)
    {
        printf("Token : %s\n", my_ptr);
        my_ptr = strtok(NULL, "=");
    }

    return (0);
}
