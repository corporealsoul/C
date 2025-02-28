#include <stdio.h>

int main() {
printf("\n");
    int var = 052;
    int input_var;
    printf("Value of var : %d \n", var);
    printf("Address of var : %d \n\n", &var);

    printf("Enter a number : ");
    scanf("%d", &input_var);

    printf("Addition : %d \n", var + input_var);


printf("\n");
return 0;
}