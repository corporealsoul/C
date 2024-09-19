#include <stdio.h>

int main() {

    int loop;
    int your_number;
    int flag = 0;

printf("\n");

    printf("Enter Number : ");
    scanf("%d", &your_number);

    for (loop = 2; loop < your_number; loop++)
    {
        if (your_number % loop == 0)
        {
            flag = 1;
            break;
        }
        
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