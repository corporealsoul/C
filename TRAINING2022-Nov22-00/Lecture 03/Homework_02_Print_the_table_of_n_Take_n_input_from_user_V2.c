#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    int NUMBER;

    printf("Number : ");
    scanf("%d", &NUMBER);

    printf("Range : ");
    scanf("%d", &RANGE);

    for (int loop = NUMBER; loop <= RANGE ; loop = loop + NUMBER) {
        printf("%d ", loop);
    }

    printf("\n");
    return 0;
}
