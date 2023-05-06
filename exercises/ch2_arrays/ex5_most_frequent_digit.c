#include <stdio.h>
#include <stdlib.h>

unsigned int count_digits(long int number) {
    size_t digit_counter[10] = { 0 };
    size_t max_occurences = 0;
    unsigned int digit = 0;

    for(long int i = number; i; i = i / 10) {
        digit_counter[i % 10]++;
    }
    for (size_t i = 0; i < 10; i++) {
        if (digit_counter[i] > max_occurences) {
            max_occurences = digit_counter[i];
            digit = i;
        }
    }
    return digit;
}


int main(int argc, char* argv[argc+1]) {
    unsigned int result = 0;

    result = count_digits(669260267L);
    printf("Result for 669260267 is %u.\n", result);
    result = count_digits(57135203L);
    printf("Result for 57135203 is %u.\n", result);
    return EXIT_SUCCESS;
}
