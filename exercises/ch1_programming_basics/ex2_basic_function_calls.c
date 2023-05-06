#include <stdio.h>
#include <stdlib.h>

void message1() {
    printf("This is message1.\n");
}

void message2() {
    printf("This is message2.\n");
    message1();
    printf("Done with message2.\n");
}

int main(int argc, char* argv[argc+1]) {
    message1();
    message2();
    printf("Done with main.\n");
    return EXIT_SUCCESS;
}
