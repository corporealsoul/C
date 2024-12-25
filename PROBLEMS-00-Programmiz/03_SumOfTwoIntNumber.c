#include<stdio.h>

int main()
{
    int int_number_one, int_number_two, sum;
    
    printf("Enter 1st Number : ");
    scanf("%d", &int_number_one);
    
    printf("Enter 2nd Number: ");
    scanf("%d", &int_number_two);
    
    sum = int_number_one + int_number_two;
    
    printf("Sum : %d", sum);
return 0;
}