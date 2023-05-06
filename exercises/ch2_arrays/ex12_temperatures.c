#include <stdio.h>
#include <stdlib.h>
#include "../../tooling/yman_strtool.h"
#include "../../tooling/yman_errtool.h"

#define BUFFER 256
#define DAYS_LIMIT 10

int main(int argc, char* argv[argc+1]) {
    int conv_res = 0;
    unsigned long days = 0;
    char st[BUFFER] = { 0 };
    char* read_res = NULL;
    unsigned long temps[DAYS_LIMIT+1] = { 0 };
    unsigned long accu_temp = 0;
    float avg_temp = 0.0;
    size_t higher = 0;

    fputs("How many days' temperatures? ", stdout);
    read_res = s_gets(st, BUFFER);
    if (!read_res) {
        err_and_exit("Cannot read user input");
    }
    conv_res = convert_str_to_ul(st, &days, 10);
    if (conv_res) {
        err_and_exit("Cannot convert user input");
    }
    if (days > DAYS_LIMIT) {
        puts("Too much days, sorry...");
        return EXIT_FAILURE;
    }
    for (size_t i = 0; i < days; i++) {
        printf("Day %zu's high temp: ", i+1);
        read_res = s_gets(st, BUFFER);
        if (!read_res) {
            err_and_exit("Cannot read user input");
        }
        conv_res = convert_str_to_ul(st, &temps[i], 10);
        if (conv_res) {
            err_and_exit("Cannot convert user input");
        }
        accu_temp += temps[i];
    }

    avg_temp = (float) accu_temp / days;
    printf("Average temp = %3.1f\n", avg_temp);
    for (size_t i = 0; i < days; i++) {
        if ((float) temps[i] > avg_temp) {
            higher++;
        }
    }
    printf("%zu days were above average.\n", higher);


    return EXIT_SUCCESS;
}
