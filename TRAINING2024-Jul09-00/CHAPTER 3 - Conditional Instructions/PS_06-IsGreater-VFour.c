#include <stdio.h>

int main() {

    int integer_variable_one = 100, integer_variable_two = 90, integer_variable_three = 70, integer_variable_four = 40;

    printf("\n");

    if (integer_variable_one > integer_variable_two && integer_variable_one > integer_variable_three && integer_variable_one > integer_variable_four)
    {
        printf("The greatest : %d", integer_variable_one);
    }

    if (integer_variable_two > integer_variable_one && integer_variable_two > integer_variable_three && integer_variable_two > integer_variable_four)
    {
        printf("The greatest : %d", integer_variable_two);
    }

    if (integer_variable_three > integer_variable_one && integer_variable_three > integer_variable_two && integer_variable_three > integer_variable_four)
    {
        printf("The greatest : %d", integer_variable_three);
    }

    if (integer_variable_four > integer_variable_one && integer_variable_four > integer_variable_two && integer_variable_four > integer_variable_three)
    {
        printf("The greatest : %d", integer_variable_four);
    }

    printf("\n");

return 0;
}