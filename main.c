#include "shell.h"
/**
 * main - main function
 * 
 * Return: void
 */
int main(void)
{
	char str[150];

	while (true)
	{
	show_prompt();
	user_input(str, sizeof(str));
	}
}
