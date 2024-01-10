#include "main.h"
#define MAX_WORDS 100

char** tokenization(const char* input_str, int* count_words) {
    if (input_str == NULL) {
        *count_words = 0;
        return NULL;
    }

    char** words = (char**)malloc(MAX_WORDS * sizeof(char*));
    if (words == NULL) {
        exit(EXIT_FAILURE);
    }

    char* copy = strdup(input_str);
    if (copy == NULL) {
        free(words);
        exit(EXIT_FAILURE);
    }

    char* token = strtok(copy, " ");

    *count_words = 0;
    while (token != NULL && *count_words < MAX_WORDS) {
        words[*count_words] = strdup(token);
        if (words[*count_words] == NULL) {
            for (int i = 0; i < *count_words; ++i) {
                free(words[i]);
            }
            free(words);
            free(copy);
            exit(EXIT_FAILURE);
        }
        (*count_words)++;
        token = strtok(NULL, " ");
    }

    free(copy);
    return words;
}