#include<stdio.h>

int main(){
    int SIZE;
    int ROW_LOOP;
    int COLUMN_LOOP, COLUMN_LOOP_2, COLUMN_LOOP_3, COLUMN_LOOP_4;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <=  SIZE -  ROW_LOOP + 1; COLUMN_LOOP++) {
            printf("* ");
        }

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <=  ROW_LOOP - 1 ; COLUMN_LOOP_2++) {
            printf("  ");
        }

        for (COLUMN_LOOP_3 = 1 ; COLUMN_LOOP_3 <=  ROW_LOOP - 1 ; COLUMN_LOOP_3++) {
            printf("  ");
        }

        for (COLUMN_LOOP_4 = 1 ; COLUMN_LOOP_4 <=  SIZE -  ROW_LOOP + 1 ; COLUMN_LOOP_4++) {
            printf("* ");
        }


        printf("\n");
    }

    printf("\n");
    return 0;
}
