#include <stdio.h>

int main() {

    int integer_variable_one = 10, integer_variable_two = 20;

    int *int_pointer_variable_one = &integer_variable_one, *int_pointer_variable_two;


printf("\n");


    printf("The ADDRESS of int_pointer_variable_one : %u \n\n", &integer_variable_one);
    printf("The ADDRESS of int_pointer_variable_one : %u \n\n", int_pointer_variable_one);
    printf("The VALUE of ADDRESS pointer_variable_one : %u \n\n", *int_pointer_variable_one);

printf("\n");
return 0;
}