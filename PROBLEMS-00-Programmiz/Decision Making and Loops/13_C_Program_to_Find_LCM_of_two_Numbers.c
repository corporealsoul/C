#include<stdio.h>

int main()
{
    int NUMBER_A, NUMBER_B;
    int STORE_LCM;
    int LOOP;
    int LARGEST;
    printf("\n");

    printf("Enter Number A : ");
    scanf("%d", &NUMBER_A);

    printf("Enter Number B : ");
    scanf("%d", &NUMBER_B);

    for (LOOP = 1 ; LOOP <= NUMBER_A * NUMBER_B ; LOOP++) {
        if ((LOOP % NUMBER_A == 0) && (LOOP % NUMBER_B == 0)) {
            STORE_LCM = LOOP;
            break;
        }
    }

    printf("The LCM : %d", STORE_LCM);

    printf("\n");
    return 0;
}
