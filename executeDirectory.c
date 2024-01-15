#include "main.h"

/**
* executeDirectory - Function that execute the command in curret directory.
* @userCommand: It is a pointer where the user enters commands.
*/


void executeDirectory(char *userCommand)
{
	if (access(userCommand, X_OK) == 0)
	{
		if (execlp(userCommand, userCommand, (char *)NULL) == -1)
		{
		}
	}
}
