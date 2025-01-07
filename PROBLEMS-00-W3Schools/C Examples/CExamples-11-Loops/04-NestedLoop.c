#include<stdio.h>

int main(){

    int count = 5, loop = 0, inner_loop = 0, inner_count = 2;

printf("\n");

    for (size_t loop = 0; loop < count; loop++)
    {
        printf("I'm inside the C For Loop !\n");

        for (size_t inner_loop = 0; inner_loop < inner_count; inner_loop++)
        {
            printf("\tI'm inside the inner C For Loop !\n");
        }
    }
    
printf("\n");
return 0;
}