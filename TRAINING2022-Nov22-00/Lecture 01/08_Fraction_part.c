#include <stdio.h>
int main(){
    printf("\n");
    float FloatNumber;
    int IntNumber;

    printf("Enter FloatNumber : ");
    scanf("%f",&FloatNumber);

    IntNumber = FloatNumber;

    printf("FloatNumber : %f \n", FloatNumber);
    printf("IntNumber : %d \n", IntNumber);

    float FractionPart = FloatNumber - IntNumber;
    printf("FractionPart : %f \n", FractionPart);

    printf("\n");
    return 0;
}
