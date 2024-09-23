/*

          *
        * *
      * * *
    * * * *
  * * * * *

*/


#include <stdio.h>

int main() {

    int inner_loop, inner_second_loop, outer_loop,outer_second_loop, count = 5;

printf("\n");

    for (size_t outer_loop = count; outer_loop > 0; outer_loop--)
    {
        for (size_t inner_loop = outer_loop; inner_loop > 0; inner_loop--)
        {
            printf("  ");
        }
        for (size_t inner_second_loop = 0; inner_second_loop < count - outer_loop + 1; inner_second_loop++)
        {
            printf("* ");
        }

        printf("\n");
    }

    
    
printf("\n");
return 0;
}