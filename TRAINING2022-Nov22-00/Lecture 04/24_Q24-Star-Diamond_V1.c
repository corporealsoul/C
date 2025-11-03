#include<stdio.h>

int main(){
    int SIZE;
    int ROW_LOOP;
    int COLUMN_LOOP, COLUMN_LOOP_2;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    int NUMBER_OF_SPACES = SIZE / 2;
    int NUMBER_OF_STARS = 1;
    int MIDDLE_LINE = SIZE / 2 + 1;

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <=  NUMBER_OF_SPACES ; COLUMN_LOOP++) {
            printf("  ");
        }

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <=  NUMBER_OF_STARS ; COLUMN_LOOP_2++) {
            printf("* ");
        }

        if (ROW_LOOP < MIDDLE_LINE) {
            NUMBER_OF_SPACES --;
            NUMBER_OF_STARS += 2;
        }
        else {
            NUMBER_OF_SPACES ++;
            NUMBER_OF_STARS -= 2;
        }

        printf("\n");
    }

    printf("\n");
    return 0;
}
