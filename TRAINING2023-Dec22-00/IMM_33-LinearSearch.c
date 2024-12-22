#include<stdio.h>

int main()
{
printf("\n");

    int numbers[5];
    int range;
    int store_loop, print_loop;
    int search_loop;

    printf("Enter Range : ");
    scanf("%d", &range);

    printf("Enter numbers : \n");

    for (store_loop = 0; store_loop < range; store_loop++)
    {
        scanf("%d", &numbers[store_loop]);
    }
    printf("\n");

    for (print_loop = 0; print_loop < range; print_loop++)
    {
        printf("%d ", numbers[print_loop]);
    }
    printf("\n");

    for ( search_loop = 0; search_loop < range; search_loop++)
    {
        if (numbers[search_loop] == 4)
        {
            printf("Found at Position : %d ", search_loop);
            break;
        }
    }
    if (search_loop == 5)
    {
        printf("Not Found !");
    }

printf("\n");
return 0;
}