#include <stdio.h>

int main() {
    

    char s1[10] = "Hello";
    char s2[12] = "Hello";

    const char *ptr1 = s1;
    const char *ptr2 = s2;

    int i = 0;
    for(; ptr1[i] != '\0' && ptr2[i] != '\0'; i++) {
        if(ptr1[i] != ptr2[i]) {
            printf("String is not equals");
            return 0;
        }
    }

    if(ptr1[i] != ptr2[i]) {
        printf("s1 len != s2 len");
        return 0;
    }

    printf("s1 equals s2");
    return 0;
}
