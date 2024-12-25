#include<stdio.h>

int main()
{
    int int_no_one, int_no_two, dividend, divisor, quotient, remmainder;
    float float_no_one, float_no_two;
    char char_alpha_a;
    
    printf("Interger : ");
    scanf("%d", &int_no_one);
    
    printf("Float : ");
    scanf("%f", &float_no_one);
    
    printf("Character : ");
    scanf(" %c", &char_alpha_a);
    
    printf("\n\n");
    
    printf("Interger Value : %d \n", int_no_one);
    printf("Interger Location : %d \n", &int_no_one);
    printf("Integer Location: %p \n", (void*)&int_no_one);
    printf("Interger Size : %d \n", sizeof(int_no_one));
    printf("\n");
    
    printf("Float Value : %f \n", float_no_one);
    printf("Float Location : %d \n", &float_no_one);
    printf("Float Location: %p \n", (void*)&float_no_one);
    printf("Float Size : %d \n", sizeof(float_no_one));
    printf("\n");
    
    printf("Character Value : %c \n", char_alpha_a);
    printf("Character Location : %d \n", &char_alpha_a);
    printf("Character Location: %p \n", (void*)&char_alpha_a);
    printf("Character Size : %d \n", sizeof(char_alpha_a));
    printf("\n");
    
    
return 0;
}






#include<stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;

    printf("Location : %p \n", ptr);
    printf("Location : %d \n", ptr);
    printf("Value : %d", *ptr);
return 0;
}






#include<stdio.h>

int main()
{
    int number = 10;
    void *ptr = &number;

    printf("Location : %p \n", ptr);
    printf("Location : %d \n", ptr);
    printf("Value : %d", *((int*)ptr));
return 0;
}






#include<stdio.h>

int print_address(int *ptr)
{
    printf("Address : %p \n", ptr);
}

int main()
{
    int number = 10;
    int *ptr = &number;

    print_address(ptr);
return 0;
}





#include<stdio.h>

void print_address(void *ptr)
{
    printf("Address : %p \n", ptr);
}

int main()
{
    int number = 10;
    int *ptr = &number;

    print_address((void*)&number);
return 0;
}


