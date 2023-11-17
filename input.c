#include "shell.h"
/**
 * user_input - read user input
 * @str: string input
 * @size: size of string
 * Return: void
 */
void user_input(char *str, size_t size)
{
	ssize_t read_Bytes = read(STDIN_FILENO, str, size);

	if (read_Bytes == -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	else if (read_Bytes == 0)
	{
		d_printf("\n");/*shows the end of a string and prints a new line*/
		exit(EXIT_SUCCESS);
	}
	str[read_Bytes - 1] = '\0'; /*to null terminate the string*/
}
