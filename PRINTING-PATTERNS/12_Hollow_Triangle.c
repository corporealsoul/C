/*

*
* *
*   *
*     *
* * * * *

*/

#include <stdio.h>

int main() {

    int inner_loop, outer_loop, count = 5;

printf("\n");

    for (size_t outer_loop = 1; outer_loop <= count; outer_loop++)
    {
        for (size_t inner_loop = 1; inner_loop <= outer_loop; inner_loop++)
        {
            if (outer_loop == 1 || outer_loop == count)
            {
                printf("* ");
            }
            else if(inner_loop == 1 || inner_loop == outer_loop)
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