#include <stdio.h>
int main(){
    printf("\n");

    int IntNumber;
    printf("Enter the number : ");
    scanf("%d", &IntNumber);

    if (IntNumber > 99 && IntNumber < 1000)
    {
        printf("It's a three Digit Number : %d", IntNumber);
    }
    else
    {
        printf("It's not a three Digit Number : %d", IntNumber);
    }

    printf("\n");
    return 0;
}
