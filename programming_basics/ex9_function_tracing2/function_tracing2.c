#include <stdio.h>
#include <stdlib.h>

void first() {
    printf("1 ");
}

void second() {
    printf("2 ");
    first();
}

void third() {
    printf("3 ");
    first();
    second();
}

int main(int argc, char* argv[argc+1]) {
    second();
    first();
    second();
    third();
    return EXIT_SUCCESS;
}
