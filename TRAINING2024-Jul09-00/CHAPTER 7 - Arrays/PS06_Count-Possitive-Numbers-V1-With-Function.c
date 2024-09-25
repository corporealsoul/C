#include <stdio.h>

int main() {

    // int array_variable_one[5];
    int array_variable_one[5] = {-1, 2, 3, -4, 5};

    int loop_fill_array, loop_show_array, loop_count_positive;
    int count = 0;

printf("\n");

    // for (size_t loop_fill_array = 0; loop_fill_array < 5; loop_fill_array++)
    // {
    //     array_variable_one[loop_fill_array] = loop_fill_array + 5;
    // }
    // printf("\n");

    for (size_t loop_show_array = 0; loop_show_array < 5; loop_show_array++)
    {
        printf("%d, ", array_variable_one[loop_show_array]);
    }
    printf("\n\n");

    for (size_t loop_count_positive = 0; loop_count_positive < 5; loop_count_positive++)
    {

        if (array_variable_one[loop_count_positive] > 0)
        {
            count = count + 1;
        }
    }
    printf("Number of Positive Values in Array : %d ", count);
    printf("\n\n");

printf("\n");
return 0;
}