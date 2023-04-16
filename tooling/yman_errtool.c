#include "yman_errtool.h"

_Noreturn void err_and_exit(char* err_msg) {
    fprintf(stderr, "%s\n", err_msg);
    exit(EXIT_FAILURE);
}
