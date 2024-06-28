#include <stdio.h>


int main() {

    int var_i = -123;
    char str_var[10];

    sprintf(str_var, "%d", var_i);

    puts(str_var);

    return 0;
}
