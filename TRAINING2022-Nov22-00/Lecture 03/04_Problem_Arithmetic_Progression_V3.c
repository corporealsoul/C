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

    for (loop = 0 ; loop <= NTH_TERM ; loop ++) {
        TERM_VALUE = FIRST_TERM + loop * COMMON_DIFFERENCE;
        printf("%d ", TERM_VALUE);
    }

    printf("\n");
    return 0;
}