#include <stdio.h>

int main() {

    int integer_variable_one;
    int loop = 0, count;

    printf("Enter count : ");
    scanf("%d", &count);

printf("\n");

    do
    {
        printf("I'm  %d - and I'm a Natural Number ! \n", loop);

        loop ++;
        
    } while (loop < count);
    
    
printf("\n");
return 0;
}