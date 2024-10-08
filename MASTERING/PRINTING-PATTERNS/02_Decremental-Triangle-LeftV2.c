/*

* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>

int main() {

    int row, column, count = 5;

printf("\n");

    for (row = 1; row <= count; row++)
    {
        for (column = 1; column <= count; column++)
        {
            if(row <= (count + 1) - column)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}