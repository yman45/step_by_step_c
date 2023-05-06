#include <stdio.h>
#include <stdlib.h>

void top_egg_part() {
    puts("  -----  ");
    puts(" /     \\");
    puts("/       \\");
}

void bottom_egg_part() {
    puts("\\       /");
    puts(" \\     /");
    puts("  -----  ");
}

void line_part() {
    puts("+--------+");
}

void stop_egg_part() {
    puts("|  STOP |");
}

int main(int argc, char* argv[argc+1]) {
    top_egg_part();
    bottom_egg_part();
    puts("");
    bottom_egg_part();
    line_part();
    puts("");
    top_egg_part();
    stop_egg_part();
    bottom_egg_part();
    puts("");
    top_egg_part();
    line_part();
    return EXIT_SUCCESS;
}
