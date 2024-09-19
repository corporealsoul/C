#include <stdio.h>

int main() {

    int loop = 1,  range = 4;
    int facto = 1;

printf("\n");

    while (loop <= range)
    {
        facto = facto * loop;

        loop ++;
    }

    printf("\nFactorials : %d\n", facto);
    
printf("\n");
return 0;
}