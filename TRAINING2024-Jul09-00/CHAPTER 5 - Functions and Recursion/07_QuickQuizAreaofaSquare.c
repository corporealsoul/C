#include <stdio.h>

int area_square(int);

int area_square(int one_side){

    int area;

    area = (one_side * one_side);

    return area;
}

int main() {

    int hold_area;
    int one_side = 10;

printf("\n");

    hold_area = area_square(one_side);

    printf("The are : %d \n", hold_area);

printf("\n");
return 0;
}