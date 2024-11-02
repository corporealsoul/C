// #include<stdio.h>

// int Functions(int*, int*);

// int Functions(int *x, int *y)
// {
//     *x = 20;
//     *y = 10;
// return 0;
// }

// int main(){
// printf("\n");

//     int x = 10, y = 20;

//     Functions(&x, &y);

//     printf("X : %d, Y : %d", x, y);

// printf("\n\n");
// return 0;
// }

#include <stdio.h>

void modifyValue(int *num)
{
    *num = 20;
}

int main()
{
    int number = 10;
    printf("Before: %d\n", number);

    modifyValue(&number);
    printf("After: %d\n", number);

    return 0;
}

