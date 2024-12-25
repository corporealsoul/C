#include<stdio.h>

int main()
{
    int dividend, divisor, quotient, remmainder;
    char char_alpha;
    
    printf("Dividend : ");
    scanf("%d", &dividend);
    
    printf("Divisor : ");
    scanf("%d", &divisor);
    
    quotient = dividend / divisor;
    remmainder = dividend % divisor;
    
    printf("Quotient : %d \n", quotient);
    printf("Remmainder : %d \n", remmainder);
    
return 0;
}