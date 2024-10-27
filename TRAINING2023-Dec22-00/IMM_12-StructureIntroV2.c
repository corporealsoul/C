#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    float price;
};

int main()
{
printf("\n");
    
    struct Book history, math;

    history.id = 1;
    history.price = 250;

    math.id = 7;
    math.price = 520;

    printf("For History - \t ID : %d, and Price : %f \n", history.id, history.price);
    printf("For Math - \t ID : %d, and Price : %f \n", math.id, math.price);

printf("\n\n");
return 0;
}