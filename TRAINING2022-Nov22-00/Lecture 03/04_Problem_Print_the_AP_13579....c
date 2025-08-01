#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    int AP_DIFFERENCE;

    printf("Difference : ");
    scanf("%d", &AP_DIFFERENCE);

    printf("Range : ");
    scanf("%d", &RANGE);

    for (int loop = AP_DIFFERENCE; loop <= RANGE ; loop = loop + AP_DIFFERENCE) {
        printf("%d ", loop);
    }

    printf("\n");
    return 0;
}
