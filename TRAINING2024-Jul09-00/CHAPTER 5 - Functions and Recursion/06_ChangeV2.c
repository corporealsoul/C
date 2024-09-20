#include <stdio.h>

int change(int a);

int change(int a){
    a = 17;
return 0;
}

int main() {
    int b = 22;
    
printf("\n");

    change(b);
    printf("B is : %d \n", b);

printf("\n");
return 0;
}