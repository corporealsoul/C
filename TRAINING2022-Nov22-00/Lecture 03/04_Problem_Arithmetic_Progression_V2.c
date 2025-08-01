#include <stdio.h>

int main() {
    printf("\n");

    int FIRST_TERM;
    int COMMON_DIFFERENCE;
    int NTH_TERM;
    int TERM_VALUE;
    int loop;

    printf("First Term : ");
    scanf("%d", &FIRST_TERM);

    printf("Common Difference : ");
    scanf("%d", &COMMON_DIFFERENCE);

    printf("N'th Term : ");
    scanf("%d", &NTH_TERM);

    // Print the entire sequence
    printf("Sequence: ");
    for (loop = 0; loop < NTH_TERM; loop++) {
        TERM_VALUE = FIRST_TERM + loop * COMMON_DIFFERENCE;
        printf("%d ", TERM_VALUE);
    }

    // // Calculate the Nth term value separately
    // int NTH_TERM_VALUE = FIRST_TERM + (NTH_TERM - 1) * COMMON_DIFFERENCE;
    // printf("\nNTH_TERM_VALUE : %d\n", NTH_TERM_VALUE);

    // Calculate the Nth term value separately
    int NTH_TERM_VALUE = FIRST_TERM + (loop - 1) * COMMON_DIFFERENCE;
    printf("\nNTH_TERM_VALUE : %d\n", NTH_TERM_VALUE);

    printf("\n");
    return 0;
}