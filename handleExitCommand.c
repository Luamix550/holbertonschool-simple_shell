#include "main.h"

/**
* handleExitCommand - function that handles the exit command "exit".
* @userCommand: It is a pointer where the user enters commands.
*/

void handleExitCommand(char *userCommand)
{
	if (strcmp(userCommand, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
}
