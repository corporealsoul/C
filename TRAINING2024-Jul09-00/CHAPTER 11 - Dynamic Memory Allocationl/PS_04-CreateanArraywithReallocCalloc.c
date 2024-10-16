#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("\n");
    int range = 5;
    int *pointer_array;

    pointer_array = (int*) calloc (range, sizeof(int));

    for (int i = 0; i <= range; i++)
    {
        // scanf("%d", &i);

        pointer_array[i] = i + 1;
    }
    
    for (int i = 0; i <= range; i++)
    {
        printf("%d ", pointer_array[i]);
    }

    printf("\n");

    range = 10;
    pointer_array = (int*) realloc (pointer_array, 10 * sizeof(int));

    for (int i = 0; i <= range; i++)
    {
        // scanf("%d", &i);

        pointer_array[i] = i + 1;
    }
    
    for (int i = 0; i <= range; i++)
    {
        printf("%d ", pointer_array[i]);
    }

    
return 0;
printf("\n");
}