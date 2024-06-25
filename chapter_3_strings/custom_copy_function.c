#include <stdio.h>
#include <string.h>

#define SOURCE_SIZE_ARRAY 100
#define DESTINATION_SIZE_ARRAY 10
#define EOS '\0'
int main() {


    char source[SOURCE_SIZE_ARRAY] = "Hello world!";
    char destination[DESTINATION_SIZE_ARRAY];

    const char* ptr_src = source;
    char* ptr_dst = destination;

    int max_size_copy = sizeof(destination);

    while (*ptr_src != '\0' && max_size_copy-- > 1) {
        *ptr_dst++ = *ptr_src++;    
    }
    *ptr_dst = '\0';
    printf("source = %s", source);
    printf("\n");
    printf("destination = %s", destination);
    printf("\n");
    printf("ptr_src = %s", ptr_dst);
    printf("\n");
    printf("ptr_dst = %s", ptr_dst);
    return 0;
}
