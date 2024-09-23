#include <stdio.h>

int pass_function(int);

int pass_function(int integer_variable_one){

    integer_variable_one = integer_variable_one * 10;

    printf("Value inside Function : %d \n", integer_variable_one);

}

int main() {

    int integer_variable_one = 10, integer_variable_two = 20;

printf("\n");
    
    pass_function(integer_variable_one);

printf("\n");
return 0;
}