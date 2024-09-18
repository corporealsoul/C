#include <stdio.h>

int main() {

    int integer_variable_one = 31, integer_variable_two = 26, integer_variable_three = 19, integer_variable_four = 10;

    printf("\n");

    if (integer_variable_one > integer_variable_two)
    {
        if (integer_variable_one > integer_variable_three)
        {
            if (integer_variable_one > integer_variable_four)
            {
                printf("Greatest : %d", integer_variable_one);
            }
        }
    }

    else if (integer_variable_two > integer_variable_three)
    {
        if (integer_variable_two > integer_variable_four)
        {
            printf("Greatest : %d", integer_variable_two);
        }
    }

    else if (integer_variable_three > integer_variable_four)
    {
        printf("Greatest : %d", integer_variable_three);
    }

    else
    {
        printf("Greatest : %d", integer_variable_four);
    }

    printf("\n");

return 0;
}