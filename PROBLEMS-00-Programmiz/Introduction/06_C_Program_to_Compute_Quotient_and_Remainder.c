#include <stdio.h>

int main() {
    int Dividend, Divisor, Quotient, Remainder;
    printf("\n");

    printf("Dividend : ");
    scanf("%d", &Dividend);

    printf("Divisor : ");
    scanf("%d", &Divisor);


    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;

    printf("When we divide : %d, by : %d we get Quotient : %d and Remainder : %d", Dividend, Divisor, Quotient, Remainder);

    printf("\n\n");
    return 0;
}