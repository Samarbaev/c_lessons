#include <stdio.h>


int main() {

    float num1, num2; // variables
    float *ptr1, *ptr2; // pointers

    /* Arithmetic operations*/
    float sum, diff, mult, div;

    
    ptr1 = &num1; // ptr1 store the address of num1
    ptr2 = &num2; // ptr2 store the address of num2

    /* User input through pointer */
    printf("Enter any two real numbers: ");
    scanf("%f%f", ptr1, ptr2);

    /* Perfome arithmetic operation*/
    sum = (*ptr1) + (*ptr2);
    diff = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div = (*ptr1) / (*ptr2);

    /* Print result*/
    printf("Sum = %.2f\n", sum);
    printf("Diff = %.2f\n", diff);
    printf("Mult = %.2f\n", mult);
    printf("Div = %.2f\n", div);

    return 0;
}
