#include<stdio.h>

int main(){
    int RANGE;
    int ROW_LOOP;
    int COLUMN_LOOP;

    printf("\n");

    printf("Range : ");
    scanf("%d", &RANGE);

    for (ROW_LOOP = 1 ; ROW_LOOP <= RANGE ; ROW_LOOP++) {
        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= RANGE ; COLUMN_LOOP++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
