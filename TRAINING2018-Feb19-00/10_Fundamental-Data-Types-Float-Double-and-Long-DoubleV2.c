#include <stdio.h>

int main() {
printf("\n");

    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;

    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof(long double));

    printf("\n");

    printf("%.16f \n", var1);
    printf("%.16f \n", var2);
    printf("%.21Lf \n", var3);

printf("\n");
return 0;
}

