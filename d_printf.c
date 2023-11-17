#include "shell.h"
/**
 * d_printf - performs the same function as printf
 * @str: string input
 *
 * Return: void
 */
void d_printf(const char *str)
{	/* writes to standard output */
	write(STDOUT_FILENO, str, _strlen(str));
}
