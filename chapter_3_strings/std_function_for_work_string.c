#include <stdio.h>
#include <string.h>

#define SOURCE_ARRAY_SIZE 100
#define DST_ARRAY_SIZE 10

void print_separator();

int main() {
    char source[SOURCE_ARRAY_SIZE] = "Hello world!";
    char dst[DST_ARRAY_SIZE];

    // minus 1, because EOS (''\0')
    int max_size = sizeof(dst) - 1;
    strncat(dst, source, max_size);
    printf("dst = %s", dst);
    print_separator();
    printf("Size source = %lu", strlen(source));
    print_separator();
    printf("Size dst = %lu", strlen(dst));
    print_separator();

    char concat[] = "AC";
    int max_add = sizeof(source) - strlen(source) - 1;

    printf("concat = %s", strncat(source, concat, max_add));
    print_separator();
    if(strcmp(source, dst) == 0) {
        printf("source == dst");
    } else {
        printf("source != dst");
    }
}

void print_separator() {
    printf("\n");
    printf("=====================\n");
}
