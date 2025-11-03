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

    int STATIC_VALUE;

    for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP++) {

        if (ROW_LOOP % 2 == 0) {
            STATIC_VALUE = 1;
        }
        else {
            STATIC_VALUE = 0;
        }

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= COLUMN ; COLUMN_LOOP++) {
            if (ROW_LOOP >= COLUMN_LOOP) {
                printf("%d ", STATIC_VALUE);
            }

        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
