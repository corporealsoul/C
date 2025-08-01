#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    printf("Times : ");
    scanf("%d", &RANGE);

    for (int loop = 1; loop <= RANGE ; loop = loop + 1) {
        printf("%d ", loop * 9);
    }

    printf("\n");
    return 0;
}
