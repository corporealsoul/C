#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    printf("Times : ");
    scanf("%d", &RANGE);

    for (int loop = 9; loop <= RANGE ; loop = loop + 9) {
        printf("%d ", loop);
    }

    printf("\n");
    return 0;
}
