#include <stdio.h>

int main() {
    
    int num1, num2;

    // Constant pointer to num1
    int * const c_ptr = &num1;

    // Assign 10 to num1 using pointer
    // Modification of value pointed by pointer is allowed
    *c_ptr = 10;

    // Re-assignment of constant pointer
    // Modification of pointer value is not allowed
    c_ptr = &num2; // error

    printf("Num1 = %d\n", num1);
    printf("Num1 = %d\n", *c_ptr);

    return 0;
}
