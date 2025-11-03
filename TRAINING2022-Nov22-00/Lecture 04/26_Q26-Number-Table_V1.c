#include<stdio.h>

int main(){
    int SIZE;
    int LOOP;
    int ROW_LOOP;
    int COLUMN_LOOP, COLUMN_LOOP_2, COLUMN_LOOP_3;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    int NUMBER_OF_STARS = SIZE;
    int NUMBER_OF_SPACES = 1;

    for (LOOP = 1 ; LOOP <= 2 * SIZE + 1 ; LOOP++) {
        printf("%d ", LOOP);
    }
    printf("\n");

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE ; ROW_LOOP++) {

        int FLAG = 1;

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= NUMBER_OF_STARS ; COLUMN_LOOP++) {
            printf("%d ", FLAG);
            FLAG ++;
        }

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <= NUMBER_OF_SPACES ; COLUMN_LOOP_2++) {
            printf("  ");
            FLAG ++;
        }

        for (COLUMN_LOOP_3 = 1 ; COLUMN_LOOP_3 <= NUMBER_OF_STARS ; COLUMN_LOOP_3++) {
            printf("%d ", FLAG);
            FLAG ++;
        }

        NUMBER_OF_STARS --;
        NUMBER_OF_SPACES +=2;

        printf("\n");
    }

    printf("\n");
    return 0;
}
