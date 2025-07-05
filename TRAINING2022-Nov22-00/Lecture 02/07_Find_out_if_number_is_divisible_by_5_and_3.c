#include <stdio.h>
int main(){
    printf("\n");
    int IntNumber;

    printf("Enter Number : ");
    scanf("%d", &IntNumber);

    if (IntNumber % 5 == 0 && IntNumber % 3 == 0)
    {
        printf("Divisible by 5 and 3\n");
    }
    else
    {
        printf("Not Divisible by 5 and 3\n");
    }

    printf("\n");
    return 0;
}
