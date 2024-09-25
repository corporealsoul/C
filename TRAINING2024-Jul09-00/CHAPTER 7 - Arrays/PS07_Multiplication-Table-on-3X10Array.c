#include <stdio.h>

int main() {

    int array_variable_one[3][10];
    int multi[] = {2, 7, 9};
    int loop_first_outer, loop_first_inner_one;

printf("\n");


    for (size_t loop_first_outer = 0; loop_first_outer < 3; loop_first_outer++)
    {
        for (size_t loop_first_inner_one = 0; loop_first_inner_one < 10; loop_first_inner_one++)
        {
            array_variable_one[loop_first_outer][loop_first_inner_one] = multi[loop_first_outer] * (loop_first_inner_one + 1);
        }
        
    }

    for (size_t loop_first_outer = 0; loop_first_outer < 3; loop_first_outer++)
    {
        for (size_t loop_first_inner_one = 0; loop_first_inner_one < 10; loop_first_inner_one++)
        {
            printf("The MULTI : %d \n", array_variable_one[loop_first_outer][loop_first_inner_one]);
        }
        printf("\n");
        
    }
    printf("\n\n");



printf("\n");
return 0;
}