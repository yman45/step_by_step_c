#include <stdio.h>
#include <stdlib.h>

size_t max_row(const size_t height, const size_t width, int array[height][width]) {
    size_t max_row = 0;
    int max = 0;

    for (size_t i = 0; i < height; i++) {
        int aggr = 0;
        for (size_t j = 0; j < width; j++) {
            aggr += array[i][j];
        }
        if (aggr > max) {
            max = aggr;
            max_row = i;
        }
    }
    return max_row;
}

int main(int argc, char* argv[argc+1]) {
    int list1[4][3] = {
        {3, 8, 12},
        {2, 9, 17},
        {43, -8, 46},
        {203, 14, 97}
    };
    int list2[1][1] = {
        {45}
    };

    printf("Max row is %zu\n", max_row(4, 3, list1));
    printf("Max row is %zu\n", max_row(1, 1, list2));
    return EXIT_SUCCESS;
}
