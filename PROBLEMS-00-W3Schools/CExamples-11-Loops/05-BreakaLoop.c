#include<stdio.h>

int main(){

    int count = 10, loop = 0;

printf("\n");

    for (size_t loop = 0; loop < count; loop++)
    {
        printf("I'm (%d) inside the C For Loop !\n", loop);

        if (loop == 5)
        {
            break;
        }
    }
    
printf("\n");
return 0;
}