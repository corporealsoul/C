#include <stdio.h>

int main() {

    int loop, count;

    printf("Enter count : ");
    scanf("%d", &count);

printf("\n");

    for (loop = 1; loop < count + 1; loop++)
    {
        printf("World of C Language, where I'm in FOR LOOOOOOP ! %d\n", loop);
    }
    
printf("\n");
return 0;
}