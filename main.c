#include "shell.h"
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	char str[150]; /* holds commandline arguments */

	while (true) /* loop infinitely */
	{
		show_prompt();
		/* read user input */
		user_input(str, sizeof(str));
		/* execut command given by user */
		command_exec(str);
	}
	return (0);
}
