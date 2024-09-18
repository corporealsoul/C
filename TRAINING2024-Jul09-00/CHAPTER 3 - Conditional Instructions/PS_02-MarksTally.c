#include <stdio.h>

int main() {

    int math, science, bio, physics;

    printf("\n");

    printf("Math : ");
    scanf("%d", &math);

    printf("Science : ");
    scanf("%d", &science);

    printf("Bio : ");
    scanf("%d", &bio);

    printf("Physics : ");
    scanf("%d", &physics);

    printf("\nRespective marks for Math : %d, Science : %d, Bio : %d, Physics : %d \n\n", math, science, bio, physics);

    if (math <= 33 || science <= 33 || bio <= 33 || physics <= 33)
    {
        printf("Failed, Due to less marks in Individual subject !!\n");
    }
    else if ((math + science + bio + physics)/4 < 40)
    {
        printf("Failed, Due to less average !!\n");
    }
    else
    {
        printf("Passed !!\n");
    }
    
    printf("\n");

return 0;
}