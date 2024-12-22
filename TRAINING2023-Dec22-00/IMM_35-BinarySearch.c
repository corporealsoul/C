#include<stdio.h>

int main()
{
printf("\n");

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int range;
    int store_loop, print_loop;
    int search, search_loop;
    int left = 0, right = 9, middle, length;

    // printf("Enter Range : ");
    // scanf("%d", &range);

    // printf("Enter numbers : \n");

    // for (store_loop = 0; store_loop < range; store_loop++)
    // {
    //     scanf("%d", &numbers[store_loop]);
    // }
    // printf("\n");

    length = sizeof(numbers) / sizeof(int);
    printf("Length : %d \n", length);

    printf("Array Elements : ");
    for (print_loop = 0; print_loop < 10; print_loop++)
    {
        printf("%d ", numbers[print_loop]);
    }
    printf("\n");

    left = 0;
    right = 9;

    printf("Enter a number you want to search : ");
    scanf("%d", &search);

    while (left <= right)
    {
        middle = (left + right) / 2;

        if (numbers[middle] == search)
        {
            printf("Found at Position : %d", middle);
            break;
        }
        else if (numbers[middle] >= search)
        {
            right = middle - 1;
        }
        else if (numbers[middle] <= search)
        {
            left = middle + 1;
        }
    }

    if (left > right)
        {
            printf("Not found ! ");
        }
    
printf("\n");
return 0;
}