#include<stdio.h>

int main()
{
printf("\n");
    int loop;
    int range = 10;
    int past = 0, present = 1, future;

    printf("Series : %d ", past);
    for (loop = 1; loop <= range; loop++)
    {
        printf("%d ", present);
        future = past + present;
        past = present;
        present = future;
    }
printf("\n");
return 0;
}