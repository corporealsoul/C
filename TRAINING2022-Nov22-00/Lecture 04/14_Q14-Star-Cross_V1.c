#include<stdio.h>

int main(){
    int ROW, COLUMN;
    int ROW_LOOP;
    int COLUMN_LOOP;

    printf("\n");

    printf("ROW : ");
    scanf("%d", &ROW);

    printf("COLUMN : ");
    scanf("%d", &COLUMN);

    for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP++) {
        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= COLUMN ; COLUMN_LOOP++) {

            if (COLUMN_LOOP == ROW_LOOP) {
                printf("* ");
            }
            else if (COLUMN_LOOP == COLUMN - ROW_LOOP + 1){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
