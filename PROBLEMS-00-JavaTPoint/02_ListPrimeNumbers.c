#include<stdio.h>

int main()
{
printf("\n");

    int bottomLine = 6, aboveLine = 20;
    int rangeLoop, iterLoop;
    int flag;

    printf("Prime Numbers Between %d to %d Are : ", bottomLine, aboveLine);

    for (rangeLoop = bottomLine; rangeLoop <= aboveLine; rangeLoop++)
    {
        flag = 0;

        for (iterLoop = 2; iterLoop < rangeLoop; iterLoop++)
        {
            if (rangeLoop % iterLoop == 0)
            {
                flag ++;
            }
        }
        if (flag == 0)
        {
            printf("%d ", rangeLoop);
        }
    }
    
printf("\n");
return 0;
}