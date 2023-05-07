#include <stdlib.h>
#include <stdio.h>

void bit_array_puzzle(int* ar);

int main(int argc, char* argv[argc+1]) {
    int ar1[2] = {0, 1};
    int ar2[2] = {1, 0};

    printf("ar1[0] = %d, ar1[1] = %d\n", ar1[0], ar1[1]);
    printf("ar2[0] = %d, ar2[1] = %d\n", ar2[0], ar2[1]);
    puts("Modifying...");
    bit_array_puzzle(ar1);
    bit_array_puzzle(ar2);
    printf("ar1[0] = %d, ar1[1] = %d\n", ar1[0], ar1[1]);
    printf("ar2[0] = %d, ar2[1] = %d\n", ar2[0], ar2[1]);
    return EXIT_SUCCESS;
}

void bit_array_puzzle(int* ar) {
    ar[0] &= 0;
    ar[1] &= 0;
}
