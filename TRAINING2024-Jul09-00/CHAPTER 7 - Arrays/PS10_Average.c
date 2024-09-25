#include <stdio.h>

int main() {

    int array_variable_one[10];
    int loop_fill_array, loop_show_array, loop_average;
    int sum = 0, average;


printf("\n\n");

    for (size_t loop_fill_array = 0; loop_fill_array < 10; loop_fill_array++)
    {
        // scanf("%d", &array_variable_one[loop_fill_array]);
        array_variable_one[loop_fill_array] = loop_fill_array + 1;
    }
    printf("\n\n");

    for (size_t loop_show_array = 0; loop_show_array < 10; loop_show_array++)
    {
        printf("%d, ", array_variable_one[loop_show_array]);
    }
    printf("\n\n");

    for (size_t loop_average = 0; loop_average < 10; loop_average++)
    {
        sum = sum + array_variable_one[loop_average];
    }   
    printf("Average : %d", sum / 10);

printf("\n\n");
return 0;
}