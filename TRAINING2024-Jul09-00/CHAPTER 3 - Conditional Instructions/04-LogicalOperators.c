#include <stdio.h>

int main() {

    int integer_variable_one = 1;
    int integer_variable_two = 1;

    printf("\n");

    printf("A and B : %d \n", integer_variable_one && integer_variable_two);
    printf("A or B : %d \n", integer_variable_one || integer_variable_two);
    printf("Not A : %d \n", !integer_variable_one);
    // printf("A and B : %d", integer_variable_one&&integer_variable_two);

    if (integer_variable_one && integer_variable_two)
    {
        printf("Inside the IF \n");
    }
    
    if (integer_variable_one)
    {
        if (integer_variable_two)
        {
            printf("Inside the IF \n");
        }
    }
    

    printf("\n");

return 0;
}