#include "main.h"

int main() {
    char *in_line = NULL;
    size_t size = 0;
    ssize_t read; 

    while (1) {
        if (isatty(STDIN_FILENO))
        {
            printf("Simple_Shell$ ");
        }
        read = getline(&in_line, &size, stdin);

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
            printf("The command not found\n");
        }
    }

    free(in_line);
    return 0;
}
