/*

  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *

*/


#include <stdio.h>

int main() {

    int row, column, row_count = 5, column_count = 9;

printf("\n");

    for (row = 1; row <= row_count; row++)
    {
        for (column = 1; column <= column_count; column++)
        {
            if(column >= column_count + row  && column <= column_count - row)
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