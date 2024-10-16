#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("\n");
    
    int number = 6;
    int *ptr;

    ptr = (int*) malloc (number * sizeof(int));

    for (int i = 0; i < number; i++)
    {
        printf("Enter value at [%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < number; i++)
    {
        printf("%d ", ptr[i]);
    }

printf("\n\n");
return 0;
}