#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("\n");

    int array_range;
    int *number_ptr;

    printf("Enter number : ", array_range);
    scanf("%d", &array_range);
    printf("\n");

    printf("Entered range : %d \n", array_range);
    printf("Entered range's location : %d \n", &array_range);

    // int number_array[number];
    number_ptr = (int*) malloc (array_range * sizeof(int));
    number_ptr[0] = 1;
    number_ptr[1] = 2;
    number_ptr[2] = 3;
    // number_ptr[3] = 4;
    printf("\n");

    printf("Value of location number_ptr[0] : %d \n", number_ptr[0]);
    printf("Value of location number_ptr[1] : %d \n", number_ptr[1]);
    printf("Value of location number_ptr[2] : %d \n", number_ptr[2]);
    printf("Value of location number_ptr[3] : %d \n", number_ptr[3]);
    printf("Value of location number_ptr[4] : %d \n", number_ptr[4]);

printf("\n");
return 0;
}