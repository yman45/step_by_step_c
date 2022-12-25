#include "yman_strtool.h"

char* s_gets(char* const st, const int n) {
    char* ret_val = NULL;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        size_t i = 0;
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                // discard rest of the input
            }
        }
    }
    return ret_val;
}

int convert_str_to_ul(const char* const st, unsigned long* ul_num, const int base) {
    unsigned long result = 0;
    char* endptr = NULL;

    result = strtoul(st, &endptr, base);
    if (*endptr == '\0' && *st != '\0') {
        *ul_num = result;
        return EXIT_SUCCESS;
    } else {
        *ul_num = 0;
        return EXIT_FAILURE;
    }
}

float convert_str_to_f(const char* const st, float* f_num) {
    float result = 0.0f;
    char* endptr = NULL;

    result = strtof(st, &endptr);
    if (*endptr == '\0' && *st != '\0') {
        *f_num = result;
        return EXIT_SUCCESS;
    } else {
        *f_num = 0.0f;
        return EXIT_FAILURE;
    }
}
