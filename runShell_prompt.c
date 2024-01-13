#include "main.h"
/**
* runShell - function that generates interactivity with the user.
*/

void runShell(void)
{
	char *in_line = NULL;
	size_t size = 0;

	while (1)
	{
		printf("Simple_Shell$ ");
		ssize_t read = getline(&in_line, &size, stdin);

		if (read == -1)
		{
			break;
		}
		if (read > 0 && in_line[read - 1] == '\n')
		{
			in_line[read - 1] = '\0';
		}
		if (createProcess(in_line) == -1)
		{
		}
	}
	free(in_line);
}
