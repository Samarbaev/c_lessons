#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int countLines = 0;
    int currentChar;
    int state = OUT;

    while ((currentChar = getchar()) != EOF) {
         if (currentChar == '\n' || currentChar == '\r') {
             countLines++;
         }
    }
    printf("Count string is %d", countLines);
}
