#include <stdio.h>

int main() {

    int array_variable_one[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int loop_show_array;
    int array_size;
    int *pointer_variable_one = &array_variable_one[0];


printf("\n");

    printf("array_variable_one [0] : %d \n", array_variable_one[0]);

    printf("\n");

    array_size = sizeof(array_variable_one) / sizeof(array_variable_one[0]);
    printf("array_size = %d", array_size);

    printf("\n\n");

    for (size_t loop_show_array = 0; loop_show_array < array_size; loop_show_array++)
    {
        printf("array_variable_one [%d] : %d , and ADDRESS : %d\n", loop_show_array, array_variable_one[loop_show_array], &array_variable_one[loop_show_array]);
    }
    
    printf("\n\n");

    printf("ADDRESS of 3rd (Pointer + 2) Element of the Array : %d\n", pointer_variable_one + 2);


printf("\n");
return 0;
}