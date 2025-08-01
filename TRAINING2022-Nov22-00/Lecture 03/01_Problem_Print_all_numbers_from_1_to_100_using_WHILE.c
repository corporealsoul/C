#include<stdio.h>

int main(){
    printf("\n");

    int RANGE;
    int LOOP = 1;

    printf("Times : ");
    scanf("%d", &RANGE);

    while (LOOP <= RANGE) {
        printf("%d ", LOOP);
        LOOP ++;
    }


    printf("\n");
    return 0;
}
