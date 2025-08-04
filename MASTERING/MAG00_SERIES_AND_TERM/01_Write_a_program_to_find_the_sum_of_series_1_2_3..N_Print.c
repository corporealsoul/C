#include <stdio.h>

int main() {

    int NTH_TERM;
    int NTH_TERM_VALUE;
    int SOLUTION = 0;
    int LOOP;

    printf("\n");

    printf("Nth Term : ");
    scanf("%d", &NTH_TERM);

    for (LOOP = 1; LOOP <= NTH_TERM ; LOOP = LOOP + 1) {
        printf("%d ", LOOP);

        SOLUTION = SOLUTION + LOOP;
    }

    printf("\n");
    printf("The SOLUTION : %d", SOLUTION);

    printf("\n");
    printf("Nth Term Value : %d", NTH_TERM);

    printf("\n\n");
    return 0;
}