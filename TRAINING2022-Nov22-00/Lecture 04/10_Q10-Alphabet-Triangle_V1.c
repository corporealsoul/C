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

        char PRINT = 'A';
        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= COLUMN ; COLUMN_LOOP++) {
            if (COLUMN_LOOP <= ROW_LOOP) {
                printf("%c ", PRINT);
                PRINT = PRINT + 1;
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
