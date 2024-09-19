#include <stdio.h>

int main() {


    int loop, count = 10;
    int what_table;
    int sum = 0;

printf("\n");

    printf("Enter which TABLE : ");
    scanf("%d", &what_table);

printf("\n");

    for (loop = 1; loop <= count; loop++)
    {
        printf("%d X %d = %d \n", what_table, loop, what_table * loop);

        sum = sum + (what_table * loop);
    }

    printf("\nFinal Addition : %d\n", sum);

printf("\n");
return 0;
}