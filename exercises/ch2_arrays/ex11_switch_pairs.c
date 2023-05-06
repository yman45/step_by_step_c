#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_it(size_t length, char* arr[length]);
void switch_pairs(char** arr, size_t length);

int main(int argc, char* argv[argc+1]) {
    char* a[7] = {"a", "bb", "c", "ddd", "ee", "f", "g"};

    print_it(7, a);
    switch_pairs(a, 7);
    print_it(7, a);
    return EXIT_SUCCESS;
}

void print_it (size_t length, char* arr[length]) {
    for (size_t i = 0; i < length; i++) {
        printf("%s ", arr[i]);
    }
    puts("");
}

void switch_pairs(char** arr, size_t length) {
    char* tmp = NULL;

    for (size_t i = 0; i+1 < length; i+=2) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = tmp;
    }
}
