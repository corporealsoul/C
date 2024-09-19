#include <stdio.h>

int main() {


    int loop, count = 20;
    int what_table;

printf("\n");

    printf("Enter which TABLE : ");
    scanf("%d", &what_table);

printf("\n");

    for (loop = 1; loop <= count; loop++)
    {
        printf("%d X %d = %d \n", what_table, loop, what_table * loop);
    }
    
printf("\n");
return 0;
}