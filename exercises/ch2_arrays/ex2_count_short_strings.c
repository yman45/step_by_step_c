#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHORT_STRING_LEN 3

size_t count_short_strings(size_t array_size, char* array[array_size]) {
    size_t result = 0;

    for (size_t i = 0; i < array_size; i++) {
        if (strlen(array[i]) <= SHORT_STRING_LEN) {
            result++;
        }
    }
    return result;
}

int main(int argc, char* argv[argc+1]) {
    size_t num_short_strings = 0;
    char* str_array[] = {"moo", "boo", "ba", "mood"};

    num_short_strings = count_short_strings(4, str_array);
    printf("Number of short strings is %zu.\n", num_short_strings);
    return EXIT_SUCCESS;
}
