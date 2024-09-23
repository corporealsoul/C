#include <stdio.h>

int make_addition(int , int );



int make_addition(int integer_variable_one, int integer_variable_two){

    int addition;

    integer_variable_one = 20;

    addition = integer_variable_one + integer_variable_two;

    printf("Addition : %d \n", addition);

}

int main() {

    int integer_variable_one = 10, integer_variable_two = 10;

printf("\n");

    make_addition(integer_variable_one, integer_variable_two);    

printf("\n");
return 0;
}