#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    double width = 2.4, height = 0.76, depth = 3.14;
    char name[] ="chair";
    const size_t size = strlen(name) + 100;


    char* result = malloc(size);

    const char format[] = "(%.3s: %.2f * %.2f * %.2f)";

    sprintf(result,format, name,  width, height, depth);
    puts(result);

    free(result);

    return 0;
}
