#ifndef MAIN_H
#define MAIN_H


/*LIBRARIES*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*FUNCTIONS*/

int createProcess(char *userCommand);
void execute(char *userCommand);

#endif/*MAIN_H*/
