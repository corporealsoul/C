#include <stdio.h>

int main()
{
    int ROW, COLUMN;
    int ROW_LOOP, COLUMN_LOOP;

    printf("\n");

    printf("Enter ROW (height of pyramid): ");
    scanf("%d", &ROW);

    printf("Enter COLUMN (should be = %d for a perfect pyramid) : ", 2 * ROW - 1);
    scanf("%d", &COLUMN);

    printf("\nThe Star Pyramid :\n\n");

    for (ROW_LOOP = 1; ROW_LOOP <= ROW; ROW_LOOP++) {
        for (COLUMN_LOOP = 1; COLUMN_LOOP <= COLUMN; COLUMN_LOOP++) {
            if (COLUMN_LOOP >= (ROW - ROW_LOOP + 1) && COLUMN_LOOP <= (ROW + ROW_LOOP - 1)) {
                printf("* ");
            }
            else {
                printf("@ "); // spaces
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
