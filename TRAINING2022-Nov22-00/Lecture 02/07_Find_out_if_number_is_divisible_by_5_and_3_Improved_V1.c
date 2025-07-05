#include<stdio.h>

int main()
{
    int number;
    printf("\n");

    printf("Enter a Number : ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("Divisible !");
    }
    else {
        printf("Not divisible !");
    }

    printf("\n");
    return 0;
}

