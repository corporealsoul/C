#include <stdio.h>

int Funcky();

int var = 10;

int main() {
printf("\n");

    // int var = 20;

    {
        // int var = 30;
        printf("Nested : %d \n", var);
    }
    printf("Main : %d \n", var);

    Funcky();

printf("\n");
return 0;
}

int Funcky()
{
    // int var = 40;
    printf("Functions : %d \n", var);

return 0;
}