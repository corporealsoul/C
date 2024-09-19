#include <stdio.h>

int main() {


    int loop, range;

    int facto = 1;

printf("\n");

    printf("Enter RANGE : ");
    scanf("%d", &range);

printf("\n");

    for (loop = 1; loop <= range; loop++)
    {
        facto = facto * loop;
    }

    printf("\nFactorials : %d\n", facto);

printf("\n");
return 0;
}