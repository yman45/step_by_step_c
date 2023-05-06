#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc+1]) {
    puts("A \"quoted\" string is");
    puts("'much' better if you learn");
    puts("the rules of \"escape sequences.\"\n");
    puts("Also, \"\" represents an empty string.");
    puts("Don't forget: use \\\" instead of \" !");
    puts("'' is not the same as \"");
    return EXIT_SUCCESS;
}
