#include <stdio.h>
#include <stdlib.h>

#define AR_LENGTH 3

void print_array(size_t ar_length, int array[ar_length]) {
    for (size_t i = 0; i < ar_length; i++) {
        printf("%d ", array[i]);
    }
    puts("");
}

void swap(int* array, size_t first_pos, size_t second_pos) {
    int* first_cell = array + first_pos;
    int data_first_cell = *first_cell;
    int* second_cell = array + second_pos;

    *first_cell = *second_cell;
    *second_cell = data_first_cell;
}

int main(int argc, char* argv[argc+1]) {
    int a1[AR_LENGTH] = {12, 34, 56};

    print_array(AR_LENGTH, a1);
    puts("Swapping positions 1 and 2");
    swap(a1, 1, 2);
    print_array(AR_LENGTH, a1);
    return EXIT_SUCCESS;
}
