#include<stdio.h>

int main()
{
    int NUMBER_A, NUMBER_B;
    int STORE_HCF;
    int LOOP;
    int LARGEST;
    printf("\n");

    printf("Enter Number A : ");
    scanf("%d", &NUMBER_A);

    printf("Enter Number B : ");
    scanf("%d", &NUMBER_B);


    while (NUMBER_A != NUMBER_B) {
        if (NUMBER_A > NUMBER_B) {
            NUMBER_A = NUMBER_A - NUMBER_B;
        }
        else {
            NUMBER_B = NUMBER_B - NUMBER_A;
        }
    }

    printf("The HCF : %d", NUMBER_B);

    printf("\n");
    return 0;
}
