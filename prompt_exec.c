#include "shell.h"
/**
 * command_exec - executes command in the shell
 * @str: string pointer
 *
 * Return: void
 */
void command_exec(const char *str)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[150];
		int arg_count = 0;

		char *token = strtok((char *)str, " ");

		while (token != NULL)
		{
		args[arg_count++] = token;
		token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

		execve(args[0], args, NULL);

		d_printf("Error executing command.\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(NULL);
	}
}
