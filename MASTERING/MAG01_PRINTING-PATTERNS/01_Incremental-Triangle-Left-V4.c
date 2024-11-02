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

    star_array[0][0] = '*';
    star_array[0][1] = ' ';
    star_array[0][2] = ' ';
    star_array[0][3] = ' ';
    star_array[0][4] = ' ';

    star_array[1][0] = '*';
    star_array[1][1] = '*';
    star_array[1][2] = ' ';
    star_array[1][3] = ' ';
    star_array[1][4] = ' ';

    star_array[2][0] = '*';
    star_array[2][1] = '*';
    star_array[2][2] = '*';
    star_array[2][3] = ' ';
    star_array[2][4] = ' ';

    star_array[3][0] = '*';
    star_array[3][1] = '*';
    star_array[3][2] = '*';
    star_array[3][3] = '*';
    star_array[3][4] = ' ';

    star_array[4][0] = '*';
    star_array[4][1] = '*';
    star_array[4][2] = '*';
    star_array[4][3] = '*';
    star_array[4][4] = '*';

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