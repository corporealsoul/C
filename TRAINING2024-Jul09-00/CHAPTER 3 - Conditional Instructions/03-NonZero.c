#include <stdio.h>

int main() {

    int integer_variable_one = 10;
    int integer_variable_two = 50;

    printf("\n");

    if (1)
    {
        printf("Non Zero Block Executed \n");
    }
    if(2)
    {
        printf("Non Zero Block Executed \n");
    }
    if(2.5)
    {
        printf("Non Zero Block Executed \n");
    }
    if('A')
    {
        printf("Non Zero Block Executed \n");
    }
    if(0)
    {
        printf("Zero Block Executed \n");
    }

    printf("\n");

return 0;
}