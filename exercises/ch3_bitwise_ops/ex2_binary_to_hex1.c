#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[argc+1]) {
    unsigned num1 = 1;
    unsigned num2 = 255;
    unsigned num3 = 31;

    printf("11111111 11111111 11111111 11111111 is %u\n", UINT_MAX);
    num1 <<= 10;
    num1 ^= 1;
    num1 <<= 15;
    printf("00000010 00000000 10000000 00000000 is %u\n", num1);
    num2 <<= 5;
    printf("00000000 00000000 00011111 11100000 is %u\n", num2);
    num3 <<= 11;
    num3 ^= 127;
    num3 <<= 16;
    printf("11111000 01111111 00000000 00000000 is %u\n", num3);

    return EXIT_SUCCESS;
}
