#include<stdio.h>

int main(){
    int RANGE;
    int LOOP;

    printf("\n");

    printf("Range : ");
    scanf("%d", &RANGE);

    for (LOOP = 1 ; LOOP <= RANGE ; LOOP++) {
        printf("* ");
        printf("\n");
    }

    printf("\n");
    return 0;
}
