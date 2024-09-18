#include <stdio.h>

int main() {

    int cost_to_company, tax;

    printf("\n");

    printf("Let me know your CTC : ");
    scanf("%d", &cost_to_company);

    printf("\n");

    if (cost_to_company >= 1000000)
    {
        printf("You pay 30 percent \n");
        tax = 0.3 * cost_to_company;
    }
    else if (cost_to_company >= 500000 && cost_to_company <= 1000000)
    {
        printf("You pay 20 percent \n");
        tax = 0.2 * cost_to_company;
    }
    else if (cost_to_company >= 250000 && cost_to_company <= 500000)
    {
        printf("You pay 5 percent \n");
        tax = 0.05 * cost_to_company;
    }
    else
    {
        printf("You don't pay ! \n");
    }
    
    printf("And you pay: %d \n", tax);

    printf("\n");

return 0;
}