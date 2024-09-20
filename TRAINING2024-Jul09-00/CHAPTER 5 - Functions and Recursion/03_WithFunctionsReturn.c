#include <stdio.h>

int make_addition(int , int );

int make_addition(int integer_variable_one, int integer_variable_two){
    int addition;

    addition = integer_variable_one + integer_variable_two;

    return addition;
}

int main() {
    int integer_variable_one = 10, integer_variable_two = 10;
    int hold_addition, hold_another_addition;

printf("\n");

    hold_addition =  make_addition(integer_variable_one, integer_variable_two);
    printf("Addition : %d \n", hold_addition); 

    hold_another_addition =  make_addition(40, 50);
    printf("Addition : %d \n", hold_another_addition);

    hold_another_addition =  make_addition(70, 80);
    printf("Addition : %d \n", hold_another_addition);

printf("\n");
return 0;
}