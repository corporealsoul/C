#include <stdio.h>

int find_average(int, int, int);

int find_average(int intno_one, int intno_two, int intno_three){

    int average;

    average = (intno_one + intno_two + intno_three) / 3;

    return average;
}

int main() {

    int hold_average;
    int intno_one, intno_two, intno_three;

printf("\n");

    hold_average = find_average(intno_one = 10, intno_two = 20, intno_three = 30);
    printf("The are : %d \n", hold_average);

printf("\n");
return 0;
}