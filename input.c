#include "shell.h"
/**
 * user_input - read user input
 * @str: string input
 * @size: size of string
 * Return: void
 */
void user_input(char *str, size_t size)
{
	if (fgets(str, size, stdin) == NULL)
	{
		if (feof(stdin)) /* endoffile*/
		{
		d_printf("\n");
		exit(EXIT_SUCCESS);
		}
		else
		{
		d_printf("Error while reading input. \n");
		exit(EXIT_FAILURE);
		}
	}
	str[strcspn(str, "\n")] = '\0'; /* get rid of new line in d string */
}
