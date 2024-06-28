#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = atoi("123");
    long b = atol("312312312313");
    long long c = atoll("4234234523523423");
    double d = atof("44554.341");

    printf("a = %d\nb = %ld\nc = %lld\nd = %f\n", a,b,c,d);
    return 0;
}
