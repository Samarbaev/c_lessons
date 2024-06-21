#include <stdio.h>


int main() {

    int num = 10;
    int * ptr;

    /* Store the address of num to pointer */
    ptr = &num;

    printf("Address of num = %p\n", &num);
    printf("Value of num = %d\n", num);
    printf("======================\n");
    printf("Address of ptr = %p\n", &ptr );
    printf("Value of ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

}
