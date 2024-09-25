#include <stdio.h>

int main() {

    int array_variable_one[] = {5, 15, 25, 35, 45};

    int *pointer_variable_one = &array_variable_one[0];


printf("\n");

    printf("The VALUE of array_variable_one[0] : %d", array_variable_one[0]);
    printf("\n");

    printf("The ADDRESS of array_variable_one[0] : %d", &array_variable_one[0]);
    printf("\n");  

    printf("\n");

    printf("The ADDRESS of array_variable_one[0], Which is also VALUE of pointer_variable_one : %d", pointer_variable_one);
    printf("\n");

    printf("The VALUE of array_variable_one[0], Using *pointer_variable_one : %d", *pointer_variable_one);
    printf("\n");

    printf("\n");

    pointer_variable_one ++;

    printf("The VALUE of pointer_variable_one, Which is also the ADDRESS of array_variable_one[1] : %d", pointer_variable_one);
    printf("\n");

    printf("The VALUE of array_variable_one[1], Using *pointer_variable_one : %d", *pointer_variable_one);
    printf("\n");

printf("\n");
return 0;
}