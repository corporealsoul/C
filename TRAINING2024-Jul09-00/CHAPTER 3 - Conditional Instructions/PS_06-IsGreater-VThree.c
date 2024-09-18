#include <stdio.h>

int main() {

    int integer_variable_one = 100, integer_variable_two = 90, integer_variable_three = 70, integer_variable_four = 40;

    int greatest = integer_variable_one;

    printf("\n");

    if (integer_variable_two > greatest)
    {
        greatest = integer_variable_two;
    }

    if (integer_variable_three > greatest)
    {
        greatest = integer_variable_three;
    }

    if (integer_variable_four > greatest)
    {
        greatest = integer_variable_four;
    }

    printf("The greatest : %d", greatest);

    printf("\n");

return 0;
}