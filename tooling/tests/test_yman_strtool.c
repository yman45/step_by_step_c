#include <stdlib.h>
#include <check.h>
#include "../yman_strtool.h"

START_TEST(test_convert_str_to_ul) {
    char num_str[100] = "";
    unsigned long num_int = 0;
    int conversion_result = 0;

    strcpy(num_str, "10");
    conversion_result = convert_str_to_ul(num_str, &num_int, 10);
    ck_assert_uint_eq(num_int, 10L);
    ck_assert_int_eq(conversion_result, 0);

    strcpy(num_str, "8512");
    conversion_result = convert_str_to_ul(num_str, &num_int, 10);
    ck_assert_uint_eq(num_int, 8512L);
    ck_assert_int_eq(conversion_result, 0);

    strcpy(num_str, "85ff");
    conversion_result = convert_str_to_ul(num_str, &num_int, 10);
    ck_assert_uint_eq(num_int, 0L);
    ck_assert_int_eq(conversion_result, 1);

    strcpy(num_str, "WRONG");
    conversion_result = convert_str_to_ul(num_str, &num_int, 10);
    ck_assert_uint_eq(num_int, 0L);
    ck_assert_int_eq(conversion_result, 1);

    strcpy(num_str, "455.16");
    conversion_result = convert_str_to_ul(num_str, &num_int, 10);
    ck_assert_uint_eq(num_int, 0);
    ck_assert_int_eq(conversion_result, 1);
}
END_TEST

START_TEST(test_convert_str_to_f) {
    char num_str[100] = "";
    float num_float = 0.0f;
    int conversion_result = 0;

    strcpy(num_str, "85.12");
    conversion_result = convert_str_to_f(num_str, &num_float);
    ck_assert_uint_eq(num_float, 85.12f);
    ck_assert_int_eq(conversion_result, 0);

    strcpy(num_str, "85.12ff");
    conversion_result = convert_str_to_f(num_str, &num_float);
    ck_assert_uint_eq(num_float, 0.0f);
    ck_assert_int_eq(conversion_result, 1);

    strcpy(num_str, "WRONG");
    conversion_result = convert_str_to_f(num_str, &num_float);
    ck_assert_uint_eq(num_float, 0.0f);
    ck_assert_int_eq(conversion_result, 1);

    strcpy(num_str, "1254");
    conversion_result = convert_str_to_f(num_str, &num_float);
    ck_assert_uint_eq(num_float, 1254.0f);
    ck_assert_int_eq(conversion_result, 0);
}
END_TEST

Suite* convert_suite(void) {
    Suite* s;
    TCase* tc_core;

    s = suite_create("Convert_ul");
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_convert_str_to_ul);
    tcase_add_test(tc_core, test_convert_str_to_f);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite* s;
    SRunner* sr;

    s = convert_suite();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
