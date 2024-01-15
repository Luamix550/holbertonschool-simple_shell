#ifndef MAIN_H
#define MAIN_H

/*MACRO*/

#define MAX_ARGS 100

/*LIBRARIES*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/*FUNCTIONS*/

void execute(char *userCommand);
void executePath(char *userCommand, char *directory);
void executeDirectory(char *userCommand);
void handleExitCommand(char *userCommand);
void runShell(void);
#endif/*MAIN_H*/
