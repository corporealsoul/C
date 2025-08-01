#include <stdio.h>
int main() {
    int FIRST_TERM;
    int NTH_TERM;
    int COMMON_DIFFERENCE;
    int TERM_VALUE;
    int loop;

    printf("\n");

    printf("FIRST_TERM : ");
    scanf("%d", &FIRST_TERM);

    printf("COMMON_DIFFERENCE : ");
    scanf("%d", &COMMON_DIFFERENCE);

    TERM_VALUE = FIRST_TERM;

    for (int loop = FIRST_TERM; TERM_VALUE > 0; loop = loop + 1) {
        printf("%d ", TERM_VALUE);
        TERM_VALUE = TERM_VALUE - COMMON_DIFFERENCE;
    }

    printf("\n");
    return 0;
}