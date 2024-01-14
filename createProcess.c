#include "main.h"
/**
* createProcess - Function that execute the process.
* @userCommand: It is a pointer where the user enters commands.
* Return: the required value.
*/

int createProcess(char *userCommand)
{
	handleExitCommand(userCommand);
	executeDirectory(userCommand);
	executePath(userCommand, getenv("PATH"));
	printf("The command not found\n");
	return (-1);
}
