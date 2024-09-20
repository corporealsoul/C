#include <stdio.h>

int sumof_natural(int);

int sumof_natural(int range){
    if (range == 1)
    {
        return 1;
    }
    return sumof_natural(range - 1) + range;
}


int main(){

printf("\n");

    printf("The sum of first 5 natural numbers is : %d", sumof_natural(5));

printf("\n\n");
return 0;
}