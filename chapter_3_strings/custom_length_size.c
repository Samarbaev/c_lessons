#include <stddef.h>
#include <stdio.h>

int main() {

    char str[100] ="Hello world!";

    const char* buf = str;
    size_t len = 0;

    while (*buf++) len++;

    printf("length = %zu", len);
}
