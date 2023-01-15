#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reverse(size_t len, char* list[len]) {
    for(int i = len-1; i >= 0; i--) {
        printf("%s ", list[i]);
    }
    puts("");
}

int main(int argc, char* argv[argc+1]) {
    char* list[] = {"the", "cat", "in", "the", "hat"};

    print_reverse(5, list);
    return EXIT_SUCCESS;
}
