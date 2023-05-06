#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc+1]) {
    int a[7] = {1, 7, 5, 6, 4, 14, 11};
    for (size_t i = 0; i < 6; i++) {
        if (a[i] > a[i+1]) {
            a[i+1] = a[i+1] * 2;
        }
    }
    for (size_t i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    return EXIT_SUCCESS;
}
