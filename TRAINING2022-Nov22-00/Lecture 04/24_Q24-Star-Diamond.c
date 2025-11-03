#include<stdio.h>

int main(){
    int SIZE;
    int ROW_LOOP, ROW_LOOP_2;
    int COLUMN_LOOP, COLUMN_LOOP_2, COLUMN_LOOP_3;
    int COLUMN_LOOP_4, COLUMN_LOOP_5, COLUMN_LOOP_6;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE - 1; ROW_LOOP++) {
        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <=  SIZE  - ROW_LOOP + 1 ; COLUMN_LOOP++) {
            printf("  ");
        }

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <=  ROW_LOOP ; COLUMN_LOOP_2++) {
            printf("* ");
        }

        for (COLUMN_LOOP_3 = 1 ; COLUMN_LOOP_3 <=  ROW_LOOP - 1 ; COLUMN_LOOP_3++) {
            printf("* ");
        }
        printf("\n");
    }

    for (ROW_LOOP_2 = 1 ; ROW_LOOP_2 <= SIZE; ROW_LOOP_2++) {
        for (COLUMN_LOOP_4 = 1 ; COLUMN_LOOP_4 <=  ROW_LOOP_2 ; COLUMN_LOOP_4++) {
            printf("  ");
        }

        for (COLUMN_LOOP_5 = 1 ; COLUMN_LOOP_5 <=  SIZE  - ROW_LOOP_2 + 1 ; COLUMN_LOOP_5++) {
            printf("* ");
        }


        for (COLUMN_LOOP_6 = 1 ; COLUMN_LOOP_6 <=  SIZE  - ROW_LOOP_2 ; COLUMN_LOOP_6++) {
            printf("* ");
        }


        printf("\n");
    }


    printf("\n");
    return 0;
}
