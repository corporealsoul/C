/*

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main() {

    int inner_loop, outer_loop, count = 5;

printf("\n");

    for (size_t outer_loop = 0; outer_loop < count + 1; outer_loop++)
    {
        for (size_t inner_loop = 0; inner_loop < outer_loop; inner_loop++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}