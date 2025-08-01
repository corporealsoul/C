#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    printf("Times : ");
    scanf("%d", &RANGE);

    for (int loop = 2; loop <= RANGE ; loop = loop + 1) {
        if (loop % 2 == 0) {
            printf("%d ", loop);
        }
    }

    printf("\n");
    return 0;
}
