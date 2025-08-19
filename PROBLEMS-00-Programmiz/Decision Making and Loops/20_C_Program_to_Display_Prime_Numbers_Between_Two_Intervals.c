#include<stdio.h>

int main()
{
    int STARTING_RANGE, ENDING_RANGE;
    int LOOP, OUTER_LOOP;
    int HOLD = 0;

    printf("\n");

    printf("Starting Range : ");
    scanf("%d", &STARTING_RANGE);

    printf("Ending Range : ");
    scanf("%d", &ENDING_RANGE);

    if (STARTING_RANGE >= 2) {
        for (OUTER_LOOP = STARTING_RANGE ; OUTER_LOOP < ENDING_RANGE ; OUTER_LOOP ++) {
            HOLD = 0;

            for (LOOP = 2 ; LOOP < OUTER_LOOP ; LOOP++) {
                if (OUTER_LOOP % LOOP == 0) {
                    HOLD ++;
                }
            }
            if (HOLD == 0) {
                printf("%d ", OUTER_LOOP);
            }
        }
    }
    else {
        printf("Starting range can not be less than : 2");
    }

    printf("\n");
    return 0;
}
