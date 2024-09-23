#include <stdio.h>

int sum(int *, int *);
int average(int *, int *);

int sum(int *int_pointer_variable_one, int *int_pointer_variable_two){

    int addition;
    addition = *int_pointer_variable_one + *int_pointer_variable_two;
    printf("\n");
    printf("Addition : %d \n", addition);
}

int average(int *int_pointer_variable_one, int *int_pointer_variable_two){

    int average;
    average = (*int_pointer_variable_one + *int_pointer_variable_two) / 2;
    printf("\n");
    printf("Average : %d \n", average);
}

int main() {

    int integer_variable_one = 10, integer_variable_two = 20;
    int *int_pointer_variable_one = &integer_variable_one, *int_pointer_variable_two = &integer_variable_two;

printf("\n");
    
    sum(int_pointer_variable_one, int_pointer_variable_two);
    average(int_pointer_variable_one, int_pointer_variable_two);

printf("\n");
return 0;
}