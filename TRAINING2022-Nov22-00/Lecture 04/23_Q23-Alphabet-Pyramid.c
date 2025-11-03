#include<stdio.h>

int main(){
    int SIZE;
    int ROW_LOOP;
    int COLUMN_LOOP, COLUMN_LOOP_2, COLUMN_LOOP_3;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE ; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <=  SIZE  - ROW_LOOP + 1; COLUMN_LOOP++) {
            printf("  ", COLUMN_LOOP);
        }

        char ALPHA_1 = 'A';

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <=  ROW_LOOP ; COLUMN_LOOP_2++) {
            printf("%c ", ALPHA_1);
            ALPHA_1 ++;
        }

        char ALPHA_2 = ALPHA_1 - 2;

        for (COLUMN_LOOP_3 = 1 ; COLUMN_LOOP_3 <= ROW_LOOP - 1; COLUMN_LOOP_3++) {
            printf("%c ", ALPHA_2);
            ALPHA_2 --;
        }


        printf("\n");
    }
    printf("\n");
    return 0;
}
