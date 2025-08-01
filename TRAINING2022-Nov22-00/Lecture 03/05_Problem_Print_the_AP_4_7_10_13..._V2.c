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

    TERM_VALUE = FIRST_TERM;

    for (loop = 1 ; loop <= NTH_TERM ; loop = loop + 1) {
        printf("%d ", TERM_VALUE);
        TERM_VALUE = TERM_VALUE + COMMON_DIFFERENCE;
    }

    printf("\n");
    return 0;
}