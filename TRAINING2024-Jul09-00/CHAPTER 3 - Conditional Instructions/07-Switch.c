#include <stdio.h>

int main() {

    int integer_choice;
    int integer_variable_one;
    int integer_variable_two;

    printf("\n");

    printf("Enter choice : ");
    scanf("%d", &integer_choice);

    switch (integer_choice)
    {
    case 1:
        printf("Print : 1 \n");
        break;
    case 2:
        printf("Print : 2 \n");
        break;
    case 3:
        printf("Print : 3 \n");
        break;
    case 4:
        printf("Print : 4 \n");
        break;

    default:
        printf("Nothing matched !");
        break;
    }

    printf("\n");

return 0;
}