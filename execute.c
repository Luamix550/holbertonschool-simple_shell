#include "main.h"

/**
* execute - function that executes commands.
* @userCommand: It is a pointer where the user enters commands.
*/

void execute(char *userCommand)
{
	char *args[2];
	args[0] = userCommand;
	args[1] = NULL;

	execv(args[0], args);
	perror("Error");
	exit(EXIT_FAILURE);
}
