#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main() {

    printf("Antes de fork\n");

    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("Error en fork");
        return 1;
    }

    if (child_pid == 0) {
        printf("Soy el Proceso Hijo\n");
    } else {
        printf("Soy el Proceso Padre y mi hijo tiene el PID: %d\n", child_pid);
    }
    printf("Después de fork\n");

    return 0;
}