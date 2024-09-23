#include <stdio.h>

int pass_function(int *);

int pass_function(int *int_pointer_variable_one){

    printf("Address inside Function : %d \n", int_pointer_variable_one);

    printf("Value inside Function : %d \n", *int_pointer_variable_one);

}

int main() {

    int integer_variable_one = 10, integer_variable_two = 20;
    int *int_pointer_variable_one = &integer_variable_one, *int_pointer_variable_two;

printf("\n");

    printf("Address inside Main: %d \n", &integer_variable_one);

    printf("\n");
    
    pass_function(int_pointer_variable_one);

printf("\n");
return 0;
}