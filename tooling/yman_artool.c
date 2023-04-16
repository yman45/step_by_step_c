#include "yman_artool.h"

void print_int_array(size_t ar_length, int array[ar_length]) {
    for (size_t i = 0; i < ar_length; i++) {
        printf("%d ", array[i]);
    }
    puts("");
}
