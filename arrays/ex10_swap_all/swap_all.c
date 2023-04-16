#include <stdio.h>
#include <stdlib.h>
#include "../../tooling/yman_artool.h"

#define LENGTH 3

void swap_all(int*, int*, size_t);

void swap_all(int* arr1, int* arr2, size_t length) {
    for (size_t i = 0; i < length; i++) {
        int tmp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = tmp;
    }

}

int main(int argc, char* argv[argc+1]) {
    int arr1[LENGTH] = {12, 34, 56};
    int arr2[LENGTH] = {20, 50, 80};

    puts("Array 1:");
    print_int_array(LENGTH, arr1);
    puts("Array 2:");
    print_int_array(LENGTH, arr2);
    puts("Swapping");
    swap_all(arr1, arr2, LENGTH);
    puts("Array 1:");
    print_int_array(LENGTH, arr1);
    puts("Array 2:");
    print_int_array(LENGTH, arr2);
    return EXIT_SUCCESS;
}
