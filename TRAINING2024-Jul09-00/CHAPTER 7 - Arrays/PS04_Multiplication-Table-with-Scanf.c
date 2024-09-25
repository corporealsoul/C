#include <stdio.h>

int main() {

    int array_variable_one[10];
    int loop_fill_array, loop_show_array;
    int table_no;

printf("\n");

    printf("Enter Table NO : ");
    scanf("%d", &table_no);

    for (size_t loop_fill_array = 0; loop_fill_array < 10; loop_fill_array++)
    {
        array_variable_one[loop_fill_array] = (loop_fill_array + 1) * table_no;
    }

    printf("\n");

    for (size_t loop_show_array = 0; loop_show_array < 10; loop_show_array++)
    {
        printf("The value of : %d X %d = %d \n", table_no, loop_show_array + 1, array_variable_one[loop_show_array]);
    }

printf("\n");
return 0;
}