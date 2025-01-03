#include<stdio.h>

int main()
{
printf("\n");
    int randomNumber = 2344, randomNumberCopy = randomNumber, remainder;
    int getReveresed, remainderSecond;
    int loop, loopSecond;

    for (loop = 0; randomNumber > 0; loop++)
    {
        remainder = randomNumber % 10;
        getReveresed = getReveresed * 10 + remainder;
        randomNumber = randomNumber / 10;
    }

    printf("\n");
    printf("The %d in Characters : ", randomNumberCopy);

    for (loopSecond = 0; getReveresed > 0; loopSecond++)
    {
        remainderSecond = getReveresed % 10;

        switch (remainderSecond)
        {
        case 1:
            printf("One ");
            break;

        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("Four ");
            break;
        
        case 5:
            printf("Five ");
            break;

        case 6:
            printf("Six ");
            break;

        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;

        case 0:
            printf("Zero ");
            break;
        
        default:
            break;
        }
        getReveresed = getReveresed / 10;
    }

printf("\n");
return 0;
}