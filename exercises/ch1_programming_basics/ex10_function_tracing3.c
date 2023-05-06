#include <stdio.h>
#include <stdlib.h>

void function_a() {
    printf("A ");
}

void function_b() {
    function_a();
    printf("B ");
}

void function_c() {
    function_b();
    printf("C ");
    function_a();
}

int main(int argc, char* argv[argc+1]) {
    function_a();
    function_b();
    function_c();
    function_b();
    return EXIT_SUCCESS;
}
