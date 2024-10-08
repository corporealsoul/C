// #include<stdio.h>

// typedef struct employee
// {
//     int salary;
//     float score;
// }employee;

// int main()
// {
//     printf("\n");
//     employee e1;
    
//     e1.salary = 1;
//     e1.score = 9.9;

//     printf("For E1 his Score is : %f and the Salary is : %d", e1.score, e1.salary);
//     printf("\n\n");

// return 0;
// }








#include<stdio.h>

typedef struct employee
{
    int salary;
    float score;
}employee;

int main()
{
    printf("\n");
    employee e1;
    employee *ptr1 = &e1;

    // (*ptr1).salary = 50;
    ptr1 -> salary = 1;
    ptr1 -> score = 9.9;

    printf("For E1 his Score is : %f and the Salary is : %d", ptr1 -> score, ptr1 -> salary);
    printf("\n\n");

return 0;
}
