#include<stdio.h>

int main()
{
    int ROW, COLUMN;
    int ROW_LOOP, COLUMN_LOOP;

    printf("\n");

    printf("Enter ROW : ");
    scanf("%d", &ROW);

    printf("Enter COLUMN : ");
    scanf("%d", &COLUMN);

    printf("\n");
    printf("The Square Pattern : ");
    printf("\n");

    for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP++) {

        for (COLUMN_LOOP = 1 ; COLUMN_LOOP <= COLUMN ; COLUMN_LOOP++) {
            if (COLUMN_LOOP >= ROW_LOOP) {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
