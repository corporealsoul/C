#include <stdio.h>

int main() {
    float FST_NUMBER, SCND_NUMBER;
    float MULTIPLICATION;
    printf("\n");

    printf("Enter 1st Number : ");
    scanf("%f", &FST_NUMBER);

    printf("Enter 2nd Number : ");
    scanf("%f", &SCND_NUMBER);

    MULTIPLICATION = FST_NUMBER * SCND_NUMBER;
    printf("Multiplication : %f", MULTIPLICATION);

    printf("\n\n");
    return 0;
}