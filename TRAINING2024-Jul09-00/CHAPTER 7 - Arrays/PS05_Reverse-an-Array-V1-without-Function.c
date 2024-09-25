#include <stdio.h>

int main() {

    int array_variable_one[5];
    int loop_fill_array, loop_show_array, loop_swap;
    int temporary, range = 5;

printf("\n");

    for (size_t loop_fill_array = 0; loop_fill_array < 5; loop_fill_array++)
    {
        // printf("Enter value for - array_variable_one [%d] : ", loop_fill_array);
        // scanf("%d", &array_variable_one[loop_fill_array]);

        array_variable_one[loop_fill_array] = loop_fill_array + 5;
    }
    printf("\n");

    printf("Before Swap : ");
    for (size_t loop_show_array = 0; loop_show_array < 5; loop_show_array++)
    {
        // printf("The value of array_variable_one [%d] is : [%d] \n",loop_show_array, array_variable_one[loop_show_array]);

        printf("%d ", array_variable_one[loop_show_array]);
    }

    for (size_t loop_swap = 0; loop_swap < range / 2; loop_swap++)
    {
        temporary = array_variable_one[loop_swap];
        array_variable_one[loop_swap] = array_variable_one[range - loop_swap - 1];
        array_variable_one[range - loop_swap - 1] = temporary;
    }
    printf("\n\n");
    
    printf("After Swap : ");
    for (size_t loop_show_array = 0; loop_show_array < 5; loop_show_array++)
    {
        printf("%d ", array_variable_one[loop_show_array]);
    }
    printf("\n\n");



printf("\n");
return 0;
}