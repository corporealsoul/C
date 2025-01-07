#include<stdio.h>

int main(){
printf("\n");

    int name[5] = {1, 2, 3, 4, 5};
    int count;
    int *ptr = name;

    count = sizeof(name) / sizeof(name[0]);
    printf("%d ", count);

    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(ptr + i));
    }
    
printf("\n");
return 0;
}