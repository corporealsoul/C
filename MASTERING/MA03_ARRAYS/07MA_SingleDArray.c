#include<stdio.h>

int main (){

printf("\n");
    // int int_array[] = {'A', 'B', 'C', 'D', 'E'};
    // int int_array[] = {"ABCDE"};  // Can't do this
    
    // char int_array[] = {'A', 'B', 'C', 'D', 'E'};
    // char int_array[] = {"ABCDE"};


    // int int_array[] = {'1', '2', '3', '4', '5'};
    // int int_array[] = {1, 2, 3, 4, 5};

    char int_array[] = {'1', '2', '3', '4', '5'};
    // int int_array[] = {1, 2, 3, 4, 5};

    printf("Print ARRAY FIRST Location : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", int_array);
    }
    printf("\n");

    printf("Print ARRAY SHELLS Location : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", &int_array[i]);
    }
    printf("\n");

    printf("Print Character : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", int_array[i]);
    }
    printf("\n");

    printf("Print ASCII : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", int_array[i]);
    }
    printf("\n");

    printf("%s", int_array);

    

printf("\n");
return 0;
}