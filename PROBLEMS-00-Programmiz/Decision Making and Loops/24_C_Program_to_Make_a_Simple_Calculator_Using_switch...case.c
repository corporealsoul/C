#include<stdio.h>

int main()
{
    char CHOICE;
    int NUMBER_A, NUMBER_B;

    printf("Enter Operator Choice : ");
    scanf("%c", &CHOICE);

    printf("Enter Number_A : ");
    scanf("%d", &NUMBER_A);

    printf("Enter Number_B : ");
    scanf("%d", &NUMBER_B);

    switch (CHOICE) {
        case '+':
            printf("%d + %d = %d", NUMBER_A, NUMBER_B, NUMBER_A + NUMBER_B);
            break;
        case '-':
            printf("%d - %d = %d", NUMBER_A, NUMBER_B, NUMBER_A - NUMBER_B);
            break;
        case '*':
            printf("%d * %d = %d", NUMBER_A, NUMBER_B, NUMBER_A * NUMBER_B);
            break;
        case '/':
            printf("%d / %d = %d", NUMBER_A, NUMBER_B, NUMBER_A / NUMBER_B);
            break;
        case '%':
            printf("%d % %d = %d", NUMBER_A, NUMBER_B, NUMBER_A % NUMBER_B);
            break;
        default:
            printf("Error! operator is not correct");
    }

    printf("\n");

    printf("\n");
    return 0;
}
