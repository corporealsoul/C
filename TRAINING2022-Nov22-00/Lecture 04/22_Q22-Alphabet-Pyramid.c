#include<stdio.h>

int main(){
    int SIZE;
    int ROW_LOOP;
    int COLUMN_LOOP, COLUMN_LOOP_2;

    printf("\n");

    printf("SIZE : ");
    scanf("%d", &SIZE);

    for (ROW_LOOP = 1 ; ROW_LOOP <= SIZE ; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <=  SIZE - ROW_LOOP + 1; COLUMN_LOOP++) {
            printf("  ");
        }

        char ALPHA = 'A';

        for (COLUMN_LOOP_2 = 1 ; COLUMN_LOOP_2 <= 1 + (ROW_LOOP - 1) * 2; COLUMN_LOOP_2++) {
            printf("%c ", ALPHA);
            ALPHA ++;
        }


        printf("\n");
    }
    printf("\n");
    return 0;
}
