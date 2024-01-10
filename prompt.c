#include "main.h"

int main(void) {
    char *in_line = NULL;
    size_t size = 0;

    while (1) {
        printf("Simple_Shell$ ");
        ssize_t read = getline(&in_line, &size, stdin);

        if (read == -1) {
            break;
        }

        if (read > 0 && in_line[read - 1] == '\n') {
            in_line[read - 1] = '\0';
        }

        int count_words;
        char **words = tokenization(in_line, &count_words);

        for (int i = 0; i < count_words; ++i) {
            free(words[i]);
        }
        free(words);

        if (createProcess(in_line) == -1) {
            printf("Command not found\n");
        }
    }

    free(in_line);
    return 0;
}