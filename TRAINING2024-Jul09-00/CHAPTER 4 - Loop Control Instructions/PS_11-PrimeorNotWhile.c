#include <stdio.h>

int main() {

    int loop = 2,  your_number, flag = 0;

printf("\n");

    printf("Enter Number : ");
    scanf("%d", &your_number);

    while (loop < your_number)
    {
        if (your_number % loop == 0)
        {
            flag = 1;
            break;
        }

        loop ++;
    }

    if (flag == 1)
    {
        printf("Not Prime !");
    }
    else
    {
        printf("Prime !");

    }
    
printf("\n");
return 0;
}