#include <complex.h>
#include <stdio.h>

int main() {

    /* Simple declarations*/
    char character = 'C';
    int integer = 1;
    float real = 10.5f;
    long long biginteger = 989898989898ll;

    /* Print variable value with their memory address*/
    printf("Value of character = %c, Address of character = %p\n", character, &character);

    printf("Value of integer = %d, Address of integer = %p\n", integer, &integer);
    
    printf("Value of real = %f, Address of real = %p\n", real, &real);
    
    printf("Value of biginteger = %lld, Address of biginteger = %p", biginteger, &biginteger);



}
