#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    printf("Times : ");
    scanf("%d", &RANGE);

    for (int loop = 1; loop <= RANGE ; loop++) {
        printf("%d ", loop);
    }

    printf("\n");
    return 0;
}
