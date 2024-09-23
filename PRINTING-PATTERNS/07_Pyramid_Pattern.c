/*

          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *

*/


#include <stdio.h>

int main() {

    int first_outer_loop, first_inner_loop_one, first_inner_loop_two, first_inner_loop_three;
    int count = 5;

printf("\n");

    for (size_t first_outer_loop = 0; first_outer_loop < count; first_outer_loop++)
    {
        for (size_t first_inner_loop_one = count - first_outer_loop; first_inner_loop_one > 0; first_inner_loop_one--)
        {
            printf("  ");
        }

        for (size_t first_inner_loop_two = 0; first_inner_loop_two < first_outer_loop + 1; first_inner_loop_two++)
        {
            printf("* ");
        }

        for (size_t first_inner_loop_three = 0; first_inner_loop_three < first_outer_loop; first_inner_loop_three++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}