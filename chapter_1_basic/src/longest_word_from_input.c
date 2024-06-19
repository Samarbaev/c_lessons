#include "stdio.h"
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* Output the longest string to stream */
int main() {

    int len; /* length is current string*/
    int max; /* Current string is max */
    char line[MAXLINE]; /* Current stdio is input*/
    char longest[MAXLINE]; /* Max string */

    max = 0;

    while ((len = getlines(line, MAXLINE)) > 0) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0) {
        printf("%s", longest);
    }
    return 0;

}

/* scan string to s, return length this string*/
int getlines(char s[], int lim) {
    int currentChar;
    int length;

    for(length = 0; length < lim -1 && (currentChar = getchar()) != EOF && currentChar != '\n'; ++length) {
        s[length] = currentChar;
    }


    if(currentChar == '\n') {
        s[length] = currentChar;
        ++length;
    }
    s[length] = '\0';
    return length;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i] != '\0'))
    {
        i++;
    }
}
