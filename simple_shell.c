#include "main.h"


int createProcess(char *userCommand)
{
	int i;
	pid_t pid_child;
	int status;
	
	if(access(userCommand, F_OK)== -1)
	{
		return(-1);
	}
	pid_child = fork();
	if(pid_child == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if(pid_child == 0)
	{
		execute(userCommand);
	}
	int pid = wait(&status);
	return(0);
}
