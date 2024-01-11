#include "main.h"

int createProcess(char *userCommand, char *args[])
{
    int i;
    pid_t pid_child;
    int status;

    pid_child = fork();
    if (pid_child == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    if (pid_child == 0)
    {
        int count_words;
		char **args = tokenization(userCommand, &count_words);
		execvp(args[0], args);
		perror("Error");
		exit(EXIT_FAILURE);
    }
    int pid = wait(&status);
    return (0);
}
