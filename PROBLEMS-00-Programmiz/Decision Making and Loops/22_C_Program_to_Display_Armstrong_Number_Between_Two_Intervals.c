#include<stdio.h>

int main()
{
    int STARTING_RANGE, ENDING_RANGE;
    int LOOP, OUTER_LOOP;
    int TEMP_LOOP;
    int HOLD;
    int REMAINDER;

    printf("\n");

    printf("Starting Range : ");
    scanf("%d", &STARTING_RANGE);

    printf("Ending Range : ");
    scanf("%d", &ENDING_RANGE);

    for (OUTER_LOOP = STARTING_RANGE ; OUTER_LOOP < ENDING_RANGE ; OUTER_LOOP ++) {

        TEMP_LOOP = OUTER_LOOP;
        HOLD = 0;

        for (LOOP = 1 ; TEMP_LOOP > 0 ; LOOP++) {

            REMAINDER = TEMP_LOOP % 10;
            HOLD = HOLD + (REMAINDER * REMAINDER * REMAINDER);

            TEMP_LOOP = TEMP_LOOP / 10;
        }
        if (OUTER_LOOP == HOLD) {
            printf("%d ", OUTER_LOOP);
        }


    }

    printf("\n");
    return 0;
}
