#include <stdio.h>
int main(){
    printf("\n");
    int IntNumber;

    printf("Number : ");
    scanf("%d",&IntNumber);

    if (IntNumber > 0)
    {
        printf("The absolute value : %d", IntNumber);
    }
    else
    {
        IntNumber = -IntNumber;
        // IntNumber = IntNumber * (-1);
        printf("The absolute value : %d", IntNumber);
    }

    printf("\n");
    return 0;
}
