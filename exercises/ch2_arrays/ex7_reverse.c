#include <stdio.h>
#include <stdlib.h>

void int_print_array(size_t len, int list[len]) {
    for(size_t i = 0; i < len; i++) {
        printf("%d ", list[i]);
    }
    puts("");
}

void reverse(size_t len, int list[len]) {
    size_t middle = len / 2;

    for(size_t i = 0; i < middle; i++) {
        int lval = list[i];
        list[i] = list[len - i - 1];
        list[len - i - 1] = lval;
    }
}

int main(int argc, char* argv[argc+1]) {
    int test_list1[] = {10, -2, 33, 55, 9};
    int test_list2[] = {84, 67, -88, 0, 15, 1};

    reverse(5, test_list1);
    reverse(6, test_list2);
    int_print_array(5, test_list1);
    int_print_array(6, test_list2);
    return EXIT_SUCCESS;
}
