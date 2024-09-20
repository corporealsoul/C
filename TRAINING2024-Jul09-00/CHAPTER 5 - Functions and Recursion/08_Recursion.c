#include <stdio.h>

int factorials(int);

int factorials(int get_value){

    if (get_value == 1 || get_value == 0)
    {
        return 1;
    }

    return factorials(get_value-1) * get_value;
}


int main() {

    int value = 8;

printf("\n");

    printf("The factorials of : %d  is %d \n",value, factorials(value));

printf("\n");
return 0;
}