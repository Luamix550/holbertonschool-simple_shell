#include "main.h"
/**
* main - function that generates interactivity with the user.
* Return: 0 successful
*/

int main(void)
{
	char *in_line = NULL;
	size_t size = 0;
	ssize_t read;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
		}
		read = getline(&in_line, &size, stdin);
		if (read == -1)
		{
			break;
		}
		if (read > 0 && in_line[read - 1] == '\n')
		{
			in_line[read - 1] = '\0';
		}
		execute(in_line);
	}
	free(in_line);
	return (0);
}
