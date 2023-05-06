#include <stdio.h>
#include <stdlib.h>

void message1() {
    printf("7 ");
}
void message2() {
    printf("5 ");
    message1();
    printf("6 ");
}

int main(int argc, char* argv[argc+1]) {
    message1();
    message2();
    printf("4 ");
    return EXIT_SUCCESS;
}
