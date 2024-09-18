#include <stdio.h>

int main() {

    int integer_variable_one;
    char ch_A = 'A', ch_Z = 'Z', ch_a = 'a', ch_z = 'z';

    char choice_char;

    printf("\n");

    printf("The value of A is %d \n", ch_A);
    printf("The value of Z is %d \n", ch_Z);
    printf("The value of a is %d \n", ch_a);
    printf("The value of z is %d \n", ch_z);

    printf("\nYou favorite Character : ");
    scanf("%c", &choice_char);

    if (choice_char >= 97 && choice_char <= 122)
    {
        printf("\nLower ! \n");
    }
    else
    {
        printf("\nSomething \n");
    }
    

    printf("\n");

return 0;
}