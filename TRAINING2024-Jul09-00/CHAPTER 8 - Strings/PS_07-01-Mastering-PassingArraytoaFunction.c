#include <stdio.h>

void print_array(int[], int);

void print_array(int int_array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", int_array[i]);
    }
    printf("\n");
}

int main()
{
printf("\n");

    int int_array[] = {1, 2, 3, 4, 5};
    int size = sizeof(int_array) / sizeof(int_array[0]);

    print_array(int_array, size);

printf("\n");
return 0;
}
