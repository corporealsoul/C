/*

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main() {

    char star_array[5][5];

printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            star_array[i][j] = '*';
        }
        for (int j = i + 1; j <5; j++)
        {
            star_array[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", star_array[i][j]);
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}