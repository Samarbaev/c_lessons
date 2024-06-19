#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    const char endLine = '\n';
    const char emptyChar = ' ';
    const char tabulationChar = '\t';

    int inputChar;

    int countLines = 0;
    int countWords = 0;
    int countChars = 0;

    int state = OUT;

    while ((inputChar = getchar()) != EOF) {
        ++countChars;
        if(inputChar == endLine) ++countLines;
        
        if (inputChar ==endLine || inputChar == emptyChar || inputChar == tabulationChar){
           state = OUT;
        } else if(state == OUT) {
            state = IN;
            ++countWords;
        }
    }   

    printf("Count lines %d\n", countLines);
    printf("Count words %d\n", countWords);
    printf("Count chars %d\n", countChars);
}
