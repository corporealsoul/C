#include <stdio.h>

int main() {
    printf("\n");

    int FIRST_TERM;
    int COMMON_DIFFERENCE;
    int NTH_TERM;
    int TERM_VALUE;
    int loop;
    int NTH_TERM_VALUE;

    printf("First Term : ");
    scanf("%d", &FIRST_TERM);

    printf("Common Difference : ");
    scanf("%d", &COMMON_DIFFERENCE);

    printf("N'th Term : ");
    scanf("%d", &NTH_TERM);

    TERM_VALUE = FIRST_TERM;

    for (loop = 1 ; loop <= FIRST_TERM + (NTH_TERM - 1) * COMMON_DIFFERENCE ; loop = loop + COMMON_DIFFERENCE) {

        printf("%d ",loop);
        // TERM_VALUE = FIRST_TERM + loop * COMMON_DIFFERENCE;
    }

    printf("\n");
    NTH_TERM_VALUE = FIRST_TERM + (NTH_TERM - 1) * COMMON_DIFFERENCE;
    printf("Nth term value : %d", NTH_TERM_VALUE);

    printf("\n");
    return 0;
}