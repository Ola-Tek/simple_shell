#include "shell.h"
/**
 * _strlen - string length
 * @str: string input
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int i = 0; /* to iterate through str */

	while (str[i])
		i++;

	return (i);
}
