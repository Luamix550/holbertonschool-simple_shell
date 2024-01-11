#ifndef MAIN_H
#define MAIN_H


/*LIBRARIES*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*FUNCTIONS*/

int createProcess(char *userCommand, char *args[]);
void execute(char *userCommand, char *args[]);
char** tokenization(const char* inputstr, int* cantidadPalabras);

#endif/*MAIN_H*/