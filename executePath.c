#include "main.h"

/**
* executePath - function that executes PATH..
* @userCommand: It is a pointer where the user enters commands.
* @directory: execute the command in the current directory.
*/

void executePath(char *userCommand, char *directory)
{
	char commandPath[1024];

	snprintf(commandPath, sizeof(commandPath), "%s/%s", directory, userCommand);

	if (access(commandPath, X_OK) == 0)
	{
		if (execlp(commandPath, userCommand, (char *)NULL) == -1)
		{
			perror("Error\n");
			exit(EXIT_FAILURE);
		}
	}
}
