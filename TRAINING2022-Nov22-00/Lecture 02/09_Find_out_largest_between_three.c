#include <stdio.h>
int main(){
    printf("\n");
    int FirstNumber = 3, SecondNumber = 4, ThirdNumber = 5;
    int Greatest = FirstNumber;

    if (SecondNumber > Greatest) {
        Greatest = SecondNumber;
    }
    if (ThirdNumber > Greatest) {
        Greatest = ThirdNumber;
    }

    printf("Greatest : %d", Greatest);

    printf("\n");
    return 0;
}
