#include "stdio.h"
#include <stdio.h>

#define ARRAY_SIZE  2

void print_separator(int count_sep);

int main() {

    int x = 10, y = 20, array[ARRAY_SIZE] = {0};

    int *ptr_ip;

    // assign ptr_ip address from variable x
    ptr_ip = &x;
    printf("x address is %p \n", ptr_ip);
    printf("x value is %d \n", *ptr_ip);
    print_separator(20);
    printf("y address is %p \n", &y);
    printf("y init value is %d \n", y);
    // change value from y to x
    y = *ptr_ip;
    printf("y value changed %d \n", *ptr_ip);
    print_separator(20);
    printf("Size of the array in bytes = %d \n",(int) sizeof(array));
    printf("Address memory array is %p \n", array);
    printf("Next 4 bytes in array  = %p \n", array + 1);    

}

void print_separator(int count_sep) {
    if (count_sep <= 0) {
        printf("========================\n");
        return;
    }


    for (int i = 0; i < count_sep; i++) {
        printf("=");
    }
    printf("\n");
}


