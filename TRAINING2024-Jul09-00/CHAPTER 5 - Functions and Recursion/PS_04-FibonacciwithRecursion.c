#include <stdio.h>

int fibonacci(int);

int fibonacci(int range){
    if (range == 1 || range == 2)
    {
        return range - 1;
    }
    return fibonacci(range - 1) + fibonacci(range - 2);
}

int main(){
    int range = 7;
    printf("The value of fibonacci series at %d is %d", range, fibonacci(range));
    return 0;
}