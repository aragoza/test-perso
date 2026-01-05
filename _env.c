#include "total.h"

/**
 * _env - function that prints enviroment variables
 * @args: arguments
 *
 * Return: 1 on success
 */

int _env(char **args)
{
	int i = 0;
	(void)(**args);

	while (environ[i])
	{
		write(1 , environ[i], strlen(environ[i]));
		write(1 , "\n", 1);
		i++;
	}
	return (1);
}