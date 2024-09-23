#include <stdio.h>

int main() {

    int integer_variable_one = 10;
    int *int_pointer_variable_one = &integer_variable_one;
    int **int_pointer_to_pointer = &int_pointer_variable_one;

printf("\n");

    printf("The ADDRESS of integer_variable_one : %u \n", &integer_variable_one);
    printf("The VALUE of integer_variable_one : %u \n", integer_variable_one);

    printf("\n");

    printf("The ADDRESS of int_pointer_variable_one : %u \n", &int_pointer_variable_one);
    printf("The VALUE of int_pointer_variable_one : %u \n", int_pointer_variable_one);
    printf("The VALUE, int_pointer_variable_one points : %u \n", *int_pointer_variable_one);

    printf("\n");
    
    printf("The ADDRESS of int_pointer_to_pointer : %u \n", &int_pointer_to_pointer);
    printf("The VALUE of int_pointer_to_pointer : %u \n", int_pointer_to_pointer);
    printf("The VALUE, int_pointer_to_pointer points : %u \n", *int_pointer_to_pointer);
    printf("The VALUE, int_pointer_to_pointer points to the Original : %u \n", **int_pointer_to_pointer);

printf("\n");
return 0;
}