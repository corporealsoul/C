#include <stdio.h>

int main() {

    int loop, count = 10, sum = 0;

printf("\n");

    for (loop = 1; loop <= count; loop++)
    {
        sum = sum + loop;

        printf("Existing value : %d + Natural number : %d \n", sum, loop);
    }
    printf("\nFinal Addition : %d\n", sum);
    
printf("\n");
return 0;
}