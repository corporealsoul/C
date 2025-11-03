#include<stdio.h>

int main(){
    int SIZE;
    int ROW_LOOP;
    int COLUMN_LOOP, COLUMN_LOOP_2, COLUMN_LOOP_3, COLUMN_LOOP_4;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    int NUMBER_OF_SPACES = SIZE;
    int NUMBER_OF_STARS = 1;

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <=  ROW_LOOP ; COLUMN_LOOP++) {
            printf("* ");
        }

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <=  NUMBER_OF_SPACES - 1 ; COLUMN_LOOP_2++) {
            printf("  ");
        }

        for (COLUMN_LOOP_3 = 1 ; COLUMN_LOOP_3 <=  NUMBER_OF_SPACES - 1 ; COLUMN_LOOP_3++) {
            printf("  ");
        }

        for (COLUMN_LOOP_4 = 1 ; COLUMN_LOOP_4 <=  NUMBER_OF_STARS ; COLUMN_LOOP_4++) {
            printf("* ");
        }

        NUMBER_OF_SPACES --;
        NUMBER_OF_STARS ++;

        printf("\n");
    }

    printf("\n");
    return 0;
}
