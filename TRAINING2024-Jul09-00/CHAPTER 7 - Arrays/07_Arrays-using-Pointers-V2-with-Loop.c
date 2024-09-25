#include <stdio.h>

int main() {

    int array_variable_one[] = {5, 15, 25, 35, 45};
    int *pointer_variable_one = &array_variable_one[0];
    int loop_array, loop_pointer;

printf("\n");

    for (size_t loop_array = 0; loop_array < 5; loop_array++)
    {
        printf("VALUE - array_variable_one [%d] : %d, \t ADDRESS - array_variable_one [%d] : %d \n", loop_array, array_variable_one[loop_array], loop_array, &array_variable_one[loop_array]);
    }

    printf("\n");

    for (size_t loop_pointer = 0; loop_pointer < 5; loop_pointer++)
    {

        printf("VALUE - pointer_variable_one : %d, \t VALUE - *pointer_variable_one : %d \n", pointer_variable_one, *pointer_variable_one);
    
        pointer_variable_one ++;
    }
    
printf("\n");
return 0;
}