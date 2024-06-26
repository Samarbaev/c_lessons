#include <stdio.h>
#include <string.h>

int main() {
    
    const char* strings[] = {
        "Ship",
        "Shopping",
        "Shematic",
        "Super", 
        "Car",
        "Sherif",
    };

    printf("sizeof(string) = %zu \n", sizeof(strings));
    printf("sizeof(*strings) = %zu \n", sizeof(*strings));
    printf("sizeof(string) / sizeof(*strings) = %zu \n", sizeof(strings) / sizeof(*strings));

    for(int i = 0; i < sizeof(strings) / sizeof(*strings); ++i) {
        if(strncmp(strings[i], "Sh", 2) == 0) {
            puts(strings[i]);
        }
    }
}
