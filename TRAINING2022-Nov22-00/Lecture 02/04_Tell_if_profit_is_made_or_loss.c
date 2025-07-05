#include <stdio.h>
int main(){
    printf("\n");

    int BuyingPrice = 100;
    int SellingPrice = 50;

    if (BuyingPrice < SellingPrice)
    {
        printf("Profit of : %d\n", SellingPrice - BuyingPrice);
    }
    else if (BuyingPrice > SellingPrice)
    {
        printf("Loss of : %d\n", BuyingPrice - SellingPrice);
    }
    else
    {
        printf("No Profit, No Loss \n");
    }

    printf("\n");
    return 0;
}
