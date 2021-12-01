#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
*main - test shell
*@ac: command line arguments
*@av: pointer to a pointer for amount of cmd line arguments
*Return: nothing else
*/
int main(int ac, char **av)
{
	size_t bufsize = 2097152;
	char size;
	char **toks = malloc(sizeof(char) * size);
	char **args;
	int token, buffer, delimiter, counter;

	if (str == NULL)
		free(str), free_list(HEAD), exit(-2);
	while (int_mode)
	{
		int_mode = isatty(STDIN_FILENO);

			if (int_mode == 1)
			{
				write(STDOUT_FILENO, "~$", 13);
			}
	}
	token = strtok(buffer, delimiter);

	while (token != NULL)
	{
		toks[counter] = strdup(token);
		token = strtok(NULL, delimiter);
		counter++;
	}
	toks[counter] = token;

	if(!pid)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			handle_errors();
		}
	else
	{
		wait();
	}
	} 
	return (0);
}
