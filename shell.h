#ifndef _SHELL_H
#define _SHELL_H

#define MAX_PATH 1024
#define MAX_INPUT 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

void d_printf(const char *str);
void user_input(char *str, size_t size);
void show_prompt(void);
void command_exec(const char *str);
int _strlen(const char *str);

#endif
