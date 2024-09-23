#include <stdio.h>

int swap(int *, int *);

int swap(int *integer_variable_one, int *integer_variable_two){

    int temporary;

    temporary = *integer_variable_one;
    *integer_variable_one = *integer_variable_two;
    *integer_variable_two = temporary;

    printf("integer_variable_one : %d \t And integer_variable_two : %d\n\n", *integer_variable_one, *integer_variable_two);

}

int main() {

    int integer_variable_one = 10, integer_variable_two = 20;

printf("\n");

    printf("integer_variable_one : %d \t And integer_variable_two : %d\n\n", integer_variable_one, integer_variable_two);

    swap(&integer_variable_one, &integer_variable_two);    

printf("\n");
return 0;
}