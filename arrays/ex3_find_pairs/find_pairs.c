#include <stdio.h>
#include <stdlib.h>

size_t find_pairs(size_t size_of_first, double const first_array[size_of_first], size_t size_of_second, double const second_array[size_of_second]) {
    size_t result = 0;

    for (size_t i = 0; i < size_of_first; i++) {
        for (size_t j = 0; j < size_of_second; j++) {
            if (first_array[i] < second_array[j]) {
                result++;
            }
        }
    }
    return result;
}

int main(int argc, char* argv[argc+1]) {
    double first[] = {1.0, 2.0, 3.0};
    double second[] = {3.0, 2.0, 2.0, 0.0, 3.0};
    size_t result = 0;

    result = find_pairs(3, first, 5, second);
    printf("Number of pairs found is %zu.\n", result);
    return EXIT_SUCCESS;
}
