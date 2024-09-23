#include <stdio.h>

int main() {

    int integer_variable_one = 10, integer_variable_two = 20;
    char char_variable_one = 'A';
    float float_variable_one = 92.68;

    int *int_pointer_variable_one = &integer_variable_one, *int_pointer_variable_two;
    char *char_pointer_variable_one = &char_variable_one;
    float *float_pointer_variable_one = &float_variable_one;

printf("\n");

    // printf("The ADDRESS of integer_variable_one : %p \n\n", &integer_variable_one);

    printf("The ADDRESS of int_pointer_variable_two : %u \n\n", &integer_variable_two);

    printf("\n");

    printf("The ADDRESS of int_pointer_variable_one : %u \n\n", &integer_variable_one);
    printf("The ADDRESS of int_pointer_variable_one : %u \n\n", int_pointer_variable_one);
    printf("The VALUE of ADDRESS pointer_variable_one : %u \n\n", *int_pointer_variable_one);

    printf("\n");

    printf("The ADDRESS of char_pointer_variable_one : %u \n\n", &char_pointer_variable_one);
    printf("The ADDRESS of char_pointer_variable_one : %u \n\n", char_pointer_variable_one);
    printf("The VALUE of ADDRESS pointer_variable_one : %c \n\n", *char_pointer_variable_one);

    printf("\n");

    printf("The ADDRESS of int_pointer_variable_two : %u \n\n", &float_pointer_variable_one);
    printf("The ADDRESS of int_pointer_variable_two : %u \n\n", float_pointer_variable_one);
    printf("The VALUE of ADDRESS pointer_variable_one : %f \n\n", *float_pointer_variable_one);

printf("\n");
return 0;
}