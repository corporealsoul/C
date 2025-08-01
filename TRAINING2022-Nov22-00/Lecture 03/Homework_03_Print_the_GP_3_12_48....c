#include <stdio.h>
int main() {
    int FIRST_TERM;
    int NTH_TERM;
    int COMMON_RATIO;
    int TERM_VALUE;
    int loop;

    printf("\n");

    printf("FIRST_TERM : ");
    scanf("%d", &FIRST_TERM);

    printf("NTH_TERM : ");
    scanf("%d", &NTH_TERM);

    printf("COMMON_RATIO : ");
    scanf("%d", &COMMON_RATIO);

    TERM_VALUE = FIRST_TERM;

    for (int loop = FIRST_TERM; loop <= NTH_TERM; loop = loop + 1) {
        printf("%d ", TERM_VALUE);
        TERM_VALUE = TERM_VALUE * COMMON_RATIO;
    }

    printf("\n");
    return 0;
}