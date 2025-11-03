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

    int ROW_TEMPO = ROW;

    for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP++) {
        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= ROW_TEMPO; COLUMN_LOOP++) {
            printf("* ");
        }
        printf("\n");
        ROW_TEMPO --;
    }
    printf("\n");
    return 0;
}
