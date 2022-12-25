#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <err.h>
#include "../../tooling/yman_strtool.h"

#define CONVERSION_MAX 1000000.0f
#define MAX_BUF_LEN 50
#define TAX_PERCENTAGE 8.0f
#define TIP_PERCENTAGE 15.0f

int get_user_input(float* numeric_user_data) {
    char buffer[MAX_BUF_LEN] = { 0 };
    char* user_input = NULL;
    size_t user_input_len = 0;
    int conv_result = 0;

    fputs("What was the meal cost? $ ", stdout);
    user_input = s_gets(buffer, MAX_BUF_LEN);
    user_input_len = strlen(user_input);
    if (user_input_len == MAX_BUF_LEN - 1) {
        errx(EXIT_FAILURE, "User input is too long.");
    }
    conv_result = convert_str_to_f(user_input, numeric_user_data);
    if (conv_result != 0) {
        errx(EXIT_FAILURE, "Invalid user input. Conversion to float failed.");
    }
    if (*numeric_user_data > CONVERSION_MAX || *numeric_user_data <= 0.0f) {
        errx(EXIT_FAILURE, "Conversion result is abnormal. You input might be wrong.");
    }
    return EXIT_SUCCESS;
}

float calculate_share(float sum, float percentage) {
    return sum / 100.0 * percentage;
}

int main(int argc, char* argv[argc+1]) {
    float cost = 0.0f, tax = 0.0f, tip = 0.0f;
    int get_user_input_result = 0;

    get_user_input_result = get_user_input(&cost);
    if (get_user_input_result != 0) {
        return EXIT_FAILURE;
    }
    tax = calculate_share(cost, TAX_PERCENTAGE);
    tip = calculate_share(cost, TIP_PERCENTAGE);
    printf("Subtotal: %.2f\n", cost);
    printf("Tax: %.2f\n", tax);
    printf("Tip: %.2f\n", tip);
    printf("Total: %.2f\n", cost+tax+tip);
    return EXIT_SUCCESS;
}
