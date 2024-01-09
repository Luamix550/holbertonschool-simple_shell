#include "main.h"


void execute(char *userCommand)
{
	//char *args[] = {userCommand, "-l", "/tmp", NULL};
	char *args[] = {userCommand, NULL};
	execv(args[0],args);
	perror("Error");
	exit(EXIT_FAILURE);
}
