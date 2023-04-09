#include <stdio.h>
#include <stdlib.h>

#define NUM_STUDENTS 5
#define NUM_WEEKS 9
#define CAP 20
#define N_SCORE 1
#define Y_SCORE 3

void print_section_result(int students[NUM_STUDENTS], size_t section) {
    printf("Section %zu\n", section);
    fputs("Student points: ", stdout);
    for (size_t i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", students[i]);
    }
    puts("");
    fputs("Student grades: ", stdout);
    for (size_t i = 0; i < NUM_STUDENTS; i++) {
        printf("%4.1f ", 5.0 * students[i]);
    }
    puts("");
}

void clean_array(int students[NUM_STUDENTS]) {
    for (size_t i = 0; i < NUM_STUDENTS; i++) {
        students[i] = 0;
    }
}

int add_with_cap(int num, int to_add) {
    if (num + to_add >= CAP) {
        return CAP;
    } else {
        return num + to_add;
    }
}

int main(int argc, char* argv[argc+1]) {
    int ch = 0;
    int students[NUM_STUDENTS] = { 0 };
    size_t i = 0, j = 0, section = 1;
    FILE* input = fopen("sections.txt", "r");
    if (!input) {
        perror("fopen failed");
        return EXIT_FAILURE;
    }
    while ((ch = getc(input)) != EOF) {
        if (ch == 'n') {
            students[i] = add_with_cap(students[i], N_SCORE);
        } else if (ch == 'y') {
            students[i] = add_with_cap(students[i], Y_SCORE);
        } else if (ch == 'a') {
        } else {
            // skip newline characters
            continue;
        }
        i++;
        if (i >= NUM_STUDENTS) {
            j++;
            i = 0;
        }
        if (j >= NUM_WEEKS) {
            j = 0;
            print_section_result(students, section);
            section++;
            clean_array(students);
        }
    }
    return EXIT_SUCCESS;
}
