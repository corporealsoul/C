#include<stdio.h>

int main()
{
    int NUMBER_A, NUMBER_B;
    int STORE_HCF;
    int LOOP;
    int LARGEST;
    printf("\n");

    if (NUMBER_A > NUMBER_B) {
        LARGEST = NUMBER_A;
    }
    else {
        LARGEST = NUMBER_B;
    }

    printf("Enter Number A : ");
    scanf("%d", &NUMBER_A);

    printf("Enter Number B : ");
    scanf("%d", &NUMBER_B);


    for (LOOP = 1; LOOP < LARGEST; LOOP++) {
        if ((NUMBER_A % LOOP == 0) && (NUMBER_B % LOOP == 0)) {
            STORE_HCF = LOOP;
        }
    }

    printf("The HCF : %d", STORE_HCF);

    printf("\n");
    return 0;
}
