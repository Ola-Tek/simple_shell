#include "shell.h"
/**
 * command_exec - executes command in the shell
 * @str: string pointer
 *
 * Return: void
 */
void command_exec(const char *str)
{	/* create child process */
	pid_t child_pid = fork();
	/* failure to create child process */
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} /* child process created */
	else if (child_pid == 0)
	{
		char *args[150]; /* pointer to tokenized string */
		int arg_count = 0; /* argument count */
		/* tokenize string */
		char *token = strtok((char *)str, " ");

		while (token != NULL) /* iterate through string */
		{
			args[arg_count++] = token; /* assign token to args */
			token = strtok(NULL, " "); /* move to next token */
		}
		args[arg_count] = NULL; /* NUll terminate array */

		execve(args[0], args, NULL); /* execute command */

		d_printf("./the_shell: No such file or directory\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(NULL);
	}
}
