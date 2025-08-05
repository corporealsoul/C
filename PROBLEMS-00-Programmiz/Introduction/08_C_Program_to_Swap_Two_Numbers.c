#include <stdio.h>

int main() {
    int A_NUMBER, B_NUMBER, TEMP;

    printf("\n");

    printf("Enter A : ");
    scanf("%d", &A_NUMBER);

    printf("Enter B : ");
    scanf("%d", &B_NUMBER);

    TEMP = A_NUMBER;

    A_NUMBER = B_NUMBER;
    B_NUMBER = TEMP;

    printf("After swap A = %d and B = %d", A_NUMBER, B_NUMBER);

    printf("\n\n");
    return 0;
}