#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {

    float fahr,celsius; 

    fahr = LOWER;
    printf("%3s\t%6s\n", "F", "C");
    while (fahr <= UPPER) {
       celsius = 5.0 * (fahr - 32.0) / 9.0;
       printf("%3.0f\t%6.1f\n", fahr, celsius);
       fahr = fahr + STEP;
    }
}
