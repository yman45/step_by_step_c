#ifndef YMAN_STRTOOL_H_
    #define YMAN_STRTOOL_H_

#include <stdlib.h>
#include <stdio.h>

char* s_gets(char* const st, const int n);
/* Slightly modified s_gets() function from the 6th edition of      *
 * C Primer Plus book by Stephen Prata, listing 11.10 on page 461   *
 *                                                                  *
 * Reads user input until newline character or a maximum number of  *
 * characters, specified by the second argument. If newline was     *
 * encountered it is stripped, replaced by null character. If       *
 * newline was not encountered, the rest of the input is discarded. */
int convert_str_to_ul(const char* const st, unsigned long* ul_num, const int base);
/* Convert string to unsigned integer using strtoul. Basically a wrapper for it. *
 * Checks that the string was indeed converted (it is not empty) and it was used *
 * as a whole (no invalid characters encountered). Provides the result using the *
 * pointer in the second argument. In case of any issues returns EXIT_FAILURE.   */
float convert_str_to_f(const char* const st, float* f_num);
/* Convert string to float using strtof. Basically a wrapper for it.             *
 * Checks that the string was indeed converted (it is not empty) and it was used *
 * as a whole (no invalid characters encountered). Provides the result using the *
 * pointer in the second argument. In case of any issues returns EXIT_FAILURE.   */
#endif
