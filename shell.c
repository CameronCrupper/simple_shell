#include "main.h"
/**
* main - cointinously reads, executes function and then prints
* @ac: argument count
* @av: argument value
* Return: 0
*/

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *val;

	while (1)
	{
		fprintf(stderr, "$ ");
		val = read_val();

	if (!val)
	{
		exit(EXIT_SUCCESS);
	}

	if (val[0] == '\0' || strcmp(val, "\n") == 0)
	{
		free(val);
	}

	if (strcmp(val, "exit\n") == 0)
	{
		free(val);
		break;
	}
		printf("%s\n", val);

	free(val);
	}
return (0);
}
/**
 *read_val - read value
 *Return: pointer
 */
char *read_val(void)
{
	char buf[1024];
	char *ptr = NULL;
	char ptrlen = 0;

	while (fgets(buf, 1024, stdin))
	{
	int buflen = strlen(buf);

	if (!ptr)
		ptr = malloc(buflen + 1);
	else
	{
	char *ptr2 = realloc(ptr, ptrlen + buflen + 1);

	if (ptr2)
	ptr = ptr2;
	else
	{
		free(ptr);
		ptr = NULL;
	}
	}
	if (!ptr)
	{
		fprintf(stderr, "error: failed to alloc buffer: %s\n", strerror(errno));
		return (NULL);
	}
	strcpy(ptr + ptrlen, buf);
	if (buf[buflen - 1] == '\n')
	{
		if (buflen == 1 || buf[buflen - 2] != '\\')
			return (ptr);
		ptr[ptrlen + buflen - 2] = '\0';
		buflen -= 2;
		fprintf(stderr, "> ");
	}
		ptrlen += buflen;
	}
	return (ptr);
}
