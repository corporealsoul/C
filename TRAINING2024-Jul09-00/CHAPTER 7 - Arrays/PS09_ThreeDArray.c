#include <stdio.h>

int main() {

    int array_variable_one[3][2][4];
    int loop_first_outer, loop_first_inner_one, loop_first_inner_two;

printf("\n");

    for (size_t loop_first_outer = 0; loop_first_outer < 3; loop_first_outer++)
    {
        for (size_t loop_first_inner_one = 0; loop_first_inner_one < 2; loop_first_inner_one++)
        {
            for (size_t loop_first_inner_two = 0; loop_first_inner_two < 4; loop_first_inner_two++)
            {
                printf("%u ", &array_variable_one[loop_first_outer][loop_first_inner_one][loop_first_inner_two]);
            }
        }
        
    }


printf("\n");
return 0;
}