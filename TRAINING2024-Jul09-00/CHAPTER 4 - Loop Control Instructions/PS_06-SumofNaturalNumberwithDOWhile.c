#include <stdio.h>

int main() {

    int loop = 1, count = 10, sum = 0;

printf("\n");

    do
    {
        sum = sum + loop;
        loop ++;

        printf("Existing value : %d + Natural number : %d \n", sum, loop);

        
    } while (loop <= 10);

    printf("\nFinal Addition : %d\n", sum);
    
    
printf("\n");
return 0;
}