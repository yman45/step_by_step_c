#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <err.h>
#include "../../tooling/yman_strtool.h"

#define CONVERSION_BASE 10
#define CONVERSION_MAX 1000000UL
#define MAX_AGE 200UL
#define MAX_BUF_LEN 50
#define RETIREMENT_AGE 65UL

int get_user_age(unsigned long* numeric_user_data) {
    char buffer[MAX_BUF_LEN] = { 0 };
    char* user_input = NULL;
    size_t user_input_len = 0;
    int conv_result = 0;

    fputs("How old are you? ", stdout);
    user_input = s_gets(buffer, MAX_BUF_LEN);
    user_input_len = strlen(user_input);
    if (user_input_len == MAX_BUF_LEN - 1) {
        errx(EXIT_FAILURE, "User input is too long.");
    }
    conv_result = convert_str_to_ul(user_input, numeric_user_data, CONVERSION_BASE);
    if (conv_result != 0) {
        errx(EXIT_FAILURE, "Invalid user input. Conversion to unsigned long failed.");
    }
    if (*numeric_user_data > CONVERSION_MAX) {
        errx(EXIT_FAILURE, "Conversion result is abnormal. Your input might be wrong.");
    }
    return EXIT_SUCCESS;
}

int main(int argc, char* argv[argc+1]) {
    unsigned long age = 0UL;
    int get_user_data_result = 0;

    get_user_data_result = get_user_age(&age);
    if (get_user_data_result != 0) {
        return EXIT_FAILURE;
    }
    if (age > MAX_AGE) {
        warnx("Entered age is too big. Are you happy?");
    } else if (age >= RETIREMENT_AGE) {
        puts("You should be already retired.");
    } else {
        printf("You have %lu years left until retirement.\n", RETIREMENT_AGE-age);
    }
    return EXIT_SUCCESS;
}
