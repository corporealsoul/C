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

    int COUNT = 1;

    for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= COLUMN ; COLUMN_LOOP++) {

            if (ROW_LOOP >= COLUMN_LOOP) {
                printf("%d ", COUNT);
                COUNT ++;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
