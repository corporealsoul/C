#include <stdio.h>

int main() {

    int integer_variable_one = 10, integer_variable_two = 20, integer_variable_three = 30, integer_variable_four = 40;

    int team_one, team_two;

    printf("\n");

    if (integer_variable_one > integer_variable_two)
    {
        team_one = integer_variable_one;
    }
    else
    {
        team_one = integer_variable_two;
    }

    if (integer_variable_three > integer_variable_four)
    {
        team_two = integer_variable_three;
    }
    else
    {
        team_two = integer_variable_four;
    }
    
    if (team_one > team_two)
    {
        printf("Largest : %d", team_one);
    }
    else
    {
        printf("Largest : %d", team_two);
    }
    
    printf("\n");

return 0;
}