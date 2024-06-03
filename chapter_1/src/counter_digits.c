#include <stdio.h>


int main() {
    
    int inputChar;

    int countWhite = 0;
    int countOtherSymbols = 0;
    int countDigits[10] = {0};

    while ((inputChar = getchar()) != EOF) {
        if (inputChar >= '0' &&  inputChar <='9'){
            ++countDigits[inputChar - '0'];
        } else if (inputChar == ' ' || inputChar =='\n' || inputChar =='\t'){
            ++countWhite;
        } else {
            ++countOtherSymbols;
        }
    }
        printf("digits = ");
        for (int i = 0; i < 10; ++i) {
            printf(" %d", countDigits[i]);        
        }
        printf("\n");
        printf("countWhite = %d, other = %d", countWhite, countOtherSymbols);
    
}

