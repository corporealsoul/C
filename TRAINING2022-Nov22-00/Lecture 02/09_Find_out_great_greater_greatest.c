#include <stdio.h>
int main(){
    printf("\n");
    int FirstNumber = 3, SecondNumber = 1, ThirdNumber = 2;
    int Great, Greater, Greatest;

    if (FirstNumber > SecondNumber)
    {
        if (FirstNumber > ThirdNumber)
        {
            printf("%d is greater \n", FirstNumber);
            Greatest = FirstNumber;
        }
        else
        {
            printf("%d is greater \n", ThirdNumber);
            Greatest = ThirdNumber;
        }
    }
    else if (SecondNumber > ThirdNumber)
    {
        printf("%d is greater \n", SecondNumber);
        Greatest = SecondNumber;
    }
    else
    {
        printf("%d is greater \n", ThirdNumber);
        Greatest = ThirdNumber;
    }

    if (Greatest == FirstNumber)
    {
        printf("%d is Greatest, ", FirstNumber);
        if (SecondNumber > ThirdNumber)
        {
            printf("%d is Greater, and %d Great", SecondNumber, ThirdNumber);
        }
        else
        {
            printf("%d is Greater, and %d Great", ThirdNumber, SecondNumber);
        }
    }
    else if (Greatest == SecondNumber)
    {
        printf("%d is Greatest, ", SecondNumber);
        if (FirstNumber > ThirdNumber)
        {
            printf("%d is Greater, and %d Great", FirstNumber, ThirdNumber);
        }
        else
        {
            printf("%d is Greater, and %d Great", ThirdNumber, FirstNumber);
        }
    }
    else if (Greatest == ThirdNumber)
    {
        printf("%d is Greatest, ", ThirdNumber);
        if (FirstNumber > SecondNumber)
        {
            printf("%d is Greater, and %d Great", FirstNumber, SecondNumber);
        }
        else
        {
            printf("%d is Greater, and %d Great", SecondNumber, FirstNumber);
        }
    }
    printf("\n");
    return 0;
}
