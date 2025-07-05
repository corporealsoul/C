#include <math.h>
#include <stdio.h>
int main(){
    int Int1stNumber = 4;
    float Float1stNumber = 9;
    float Float2ndNumber = 2;
    int remainder;
    int quotient;
    printf("\n");

    quotient = Float1stNumber / Float2ndNumber;
    printf("Quotient : %d\n", quotient);

    remainder = Float1stNumber - (Float2ndNumber * quotient);
    printf("Remainder : %d\n", remainder);

    printf("\n");
    return 0;
}
