#include <stdio.h>

int main() {

    int FIRST_TERM;
    int NTH_TERM;
    int COMMON_DIFFERENCE;
    int TERM_VALUE;
    int NTH_TERM_VALUE;
    int SOLUTION = 0;
    int LOOP;

    printf("\n");

    printf("1st Term : ");
    scanf("%d", &FIRST_TERM);

    printf("Nth Term : ");
    scanf("%d", &NTH_TERM);

    printf("Common difference : ");
    scanf("%d", &COMMON_DIFFERENCE);

    printf("\n");
    NTH_TERM_VALUE = 2 * NTH_TERM - 1; // a + (n-1) d
    printf("Nth Term Value : %d", NTH_TERM_VALUE);

    printf("\n");
    for (LOOP = 0; LOOP < NTH_TERM ; LOOP = LOOP + 1) {
        TERM_VALUE = FIRST_TERM + LOOP * COMMON_DIFFERENCE; // (a+nd)
        printf("%d ", TERM_VALUE);

        SOLUTION = SOLUTION + TERM_VALUE;
    }

    printf("\n");
    printf("The SOLUTION : %d", SOLUTION);

    printf("\n\n");
    return 0;
}