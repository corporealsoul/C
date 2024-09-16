#include <stdio.h>

int main()
{
    int noone = 45;
    float notwo = 45.45;
    int typed_notwo;

    // printf("noone : %d \n", noone);
    // printf("notwo : %d \n", notwo);
    // printf("notwo : %f \n", notwo);

    typed_notwo = (int) notwo;
    printf("typed_notwo : %d \n", typed_notwo);

return 0;
}