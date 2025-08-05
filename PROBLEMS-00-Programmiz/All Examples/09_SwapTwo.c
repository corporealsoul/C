#include<stdio.h>

int main()
{
    int int_number_one = 10, int_number_two = 20;
    int temp;
 
    printf("int_number_one = %d \n", int_number_one);
    printf("int_number_two = %d \n", int_number_two);
    
    printf("\n");
    temp = int_number_one;
    int_number_one = int_number_two;
    int_number_two = temp;
    
    printf("After swap int_number_one = %d \n", int_number_one);
    printf("After swap int_number_two = %d \n", int_number_two);    
    
return 0;
}






#include<stdio.h>

int main()
{
    int int_number_one = 10, int_number_two = 20;
    int temp;
 
    printf("int_number_one = %d \n", int_number_one);
    printf("int_number_two = %d \n", int_number_two);
    
    printf("\n");

    int_number_one = int_number_one + int_number_two;
    
    int_number_two = int_number_one - int_number_two;
    int_number_one = int_number_one - int_number_two;
    
    printf("After swap int_number_one = %d \n", int_number_one);
    printf("After swap int_number_two = %d \n", int_number_two);    
    
return 0;
}





#include<stdio.h>

int main()
{
    int int_number_one = 10, int_number_two = 20;
    int temp;
 
    printf("int_number_one = %d \n", int_number_one);
    printf("int_number_two = %d \n", int_number_two);
    
    printf("\n");

    int_number_one = int_number_one - int_number_two;
    
    int_number_two = int_number_one + int_number_one;
    int_number_one = int_number_two - int_number_one;
    
    
    printf("After swap int_number_one = %d \n", int_number_one);
    printf("After swap int_number_two = %d \n", int_number_two);    
    
return 0;
}






#include<stdio.h>

int main()
{
    int int_number_one = 10, int_number_two = 20;
    int temp;
 
    printf("int_number_one = %d \n", int_number_one);
    printf("int_number_two = %d \n", int_number_two);
    
    printf("\n");

    int_number_one = int_number_one ^ int_number_two;
    
    int_number_two = int_number_one ^ int_number_two;
    int_number_one = int_number_one ^ int_number_two;
    
    
    printf("After swap int_number_one = %d \n", int_number_one);
    printf("After swap int_number_two = %d \n", int_number_two);    
    
return 0;
}

