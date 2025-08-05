#include<stdio.h>

int main()
{
    float int_number_one, int_number_two, mul;
    
    printf("Enter 1st Number : ");
    scanf("%f", &int_number_one);
    
    printf("Enter 2nd Number: ");
    scanf("%f", &int_number_two);
    
    mul = int_number_one * int_number_two;
    
    printf("Sum : %f", mul);
return 0;
}