#include <stdio.h>

int main() {

    int loop = 1, count = 10;
    int sum = 0;

printf("\n");

    while (loop <= count)
    {
        sum = sum + loop;
        loop ++;

        printf("Existing value : %d + Natural number : %d \n", sum, loop);
    }

    printf("\nFinal Addition : %d\n", sum);
    
printf("\n");
return 0;
}