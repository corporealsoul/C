#include <stdio.h>

int main() {

    int array_variable_one[10];
    int loop_fill_array, loop_show_array;

printf("\n");

    for (size_t loop_fill_array = 0; loop_fill_array < 10; loop_fill_array++)
    {
        array_variable_one[loop_fill_array] = (loop_fill_array + 1) * 5;
    }

    printf("\n");

    for (size_t loop_show_array = 0; loop_show_array < 10; loop_show_array++)
    {
        printf("The value of : 5 X %d = %d \n", loop_show_array + 1, array_variable_one[loop_show_array]);
    }

printf("\n");
return 0;
}