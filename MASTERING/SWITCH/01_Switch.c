#include <stdio.h>
#include <stdlib.h>


int my_add();
int my_mul();
int my_div();


int my_add(){
    int num1, num2, sum;
    printf("Enter number One : ");
    scanf("%d", &num1);
    printf("Enter number Two : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum : %d", sum);
    printf("\n\n");
return sum;
}


int my_mul(){
    int num1, num2, mul;
    printf("Enter number One : ");
    scanf("%d", &num1);
    printf("Enter number Two : ");
    scanf("%d", &num2);

    mul = num1 * num2;
    printf("Mul : %d", mul);
    printf("\n\n");
return mul;
}


int my_div(){
    int num1, num2, div;
    printf("Enter number One : ");
    scanf("%d", &num1);
    printf("Enter number Two : ");
    scanf("%d", &num2);

    div = num1 / num2;
    printf("Div : %d", div);
    printf("\n\n");
return div;
}


int main()
{
printf("\n");

    while (1)
    {

        int switch_to;

        printf("Enter your choice : ");
        scanf("%d", &switch_to);
        printf("\n");

        switch (switch_to)
        {

            case 1:
            {
                my_add();
                break;
            }

            case 2:
            {
                my_mul();
                break;
            }

            case 3:
            {
                my_div();
                break;
            }

            case 4:
            {
                exit(0);
            }

            default:
            {
                printf("Invalid Choice");
                printf("\n\n");
                break;
            }
        }
    }

printf("\n\n");
return 0;
}