#include <stdio.h>

int main() {

    int integer_variable_one = 5, integer_variable_two;
    int loop_scan, loop_print;
    int array_variable_one[] = {12, 43, 89};
    int *pointer_variable_one = &integer_variable_one;
    
printf("\n");

    printf("Address : %d \n", &integer_variable_one);
    printf("Address : %d \n", pointer_variable_one);
    printf("Address : %d \n", *pointer_variable_one);

    pointer_variable_one ++;

    printf("Address : %d \n", pointer_variable_one);

printf("\n");
return 0;
}