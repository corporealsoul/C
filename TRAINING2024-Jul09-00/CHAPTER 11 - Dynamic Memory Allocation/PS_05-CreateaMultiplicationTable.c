#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("\n");
    int range = 10;
    int *pointer_array;

    pointer_array = (int*) calloc (range, sizeof(int));

    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= range; j++)
        {
            pointer_array[i] = i * j;
            printf("%d ", pointer_array[i]);
        }
        printf("\n");
        
    }
    printf("\n");

return 0;
printf("\n");
}