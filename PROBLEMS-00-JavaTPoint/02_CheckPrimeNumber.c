#include<stdio.h>

int main()
{
printf("\n");
    int randomNumber = 4;
    int loop;
    int flag = 0;

    for (loop = 2; loop < randomNumber; loop++)
    {
        if (randomNumber % loop == 0)
        {
            flag ++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    
printf("\n");
return 0;
}