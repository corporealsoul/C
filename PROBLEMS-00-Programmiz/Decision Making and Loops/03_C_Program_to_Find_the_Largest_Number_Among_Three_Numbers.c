#include<stdio.h>

int main()
{
    int NUMBER_A, NUMBER_B, NUMBER_C;
    int LARGEST;
    printf("\n");

    printf("Number_A : ");
    scanf("%d", &NUMBER_A);

    printf("Number_B : ");
    scanf("%d", &NUMBER_B);

    printf("Number_C : ");
    scanf("%d", &NUMBER_C);

    LARGEST = NUMBER_A;

    if (NUMBER_B > NUMBER_A) {
        LARGEST = NUMBER_B;
    }
    if (NUMBER_C > NUMBER_B) {
        LARGEST = NUMBER_C;
    }

    printf("Largest : %d", LARGEST);

    printf("\n");
    return 0;
}

