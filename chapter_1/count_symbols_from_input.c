#include "stdio.h"
#include <stdio.h>

int main() {
    long countSymbols = 0;
    char ch;

    while ((ch = getchar()) != EOF) { 
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            putchar(ch);
            putchar('\n');
            ++countSymbols;
        }
    }

    printf("%ld\n", countSymbols);
}
