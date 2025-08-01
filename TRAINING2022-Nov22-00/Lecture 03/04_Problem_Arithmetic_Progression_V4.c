#include <stdio.h>

int main() {
    printf("\n");

    int FIRST_TERM;
    int COMMON_DIFFERENCE;
    int NTH_TERM;
    int TERM_VALUE;
    int loop;
    int FLAG = 0, IS_PRESENT = 11;

    printf("First Term : ");
    scanf("%d", &FIRST_TERM);

    printf("Common Difference : ");
    scanf("%d", &COMMON_DIFFERENCE);

    printf("N'th Term : ");
    scanf("%d", &NTH_TERM);

    for (loop = 0 ; loop <= NTH_TERM ; loop = loop + 1) {
        TERM_VALUE = FIRST_TERM + loop * COMMON_DIFFERENCE;
        printf("%d ", TERM_VALUE);

        if (IS_PRESENT == TERM_VALUE) {
            FLAG = FLAG + 1;
        }
    }

    printf("\n");
    if (FLAG > 0) {
        printf("%d : is Present in Sequence", IS_PRESENT);
    }
    else {
        printf("%d : is not Present in Sequence", IS_PRESENT);
    }

    printf("\n");
    return 0;
}