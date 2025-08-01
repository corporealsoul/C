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

    for (loop = FIRST_TERM ; loop <= FIRST_TERM + (NTH_TERM - 1) * COMMON_DIFFERENCE ; loop = loop + COMMON_DIFFERENCE) {
        printf("%d ", loop);

    }

    printf("\n");
    return 0;
}