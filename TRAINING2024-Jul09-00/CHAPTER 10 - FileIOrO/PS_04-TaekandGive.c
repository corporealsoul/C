#include<stdio.h>

int main()
{
printf("\n");

    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;

    ptr = fopen("FileStoreDetails.txt", "w");

    printf("Enter the name - EMPLOYEE1 : ");
    scanf("%s", &name1);
    printf("\n");

    printf("Enter the salary - EMPLOYEE1 : ");
    scanf("%d", &salary1);
    printf("\n\n");

    printf("Enter the name - EMPLOYEE2 : ");
    scanf("%s", &name2);
    printf("\n");
    
    printf("Enter the name - EMPLOYEE2 : ");
    scanf("%d", &salary2);
    printf("\n\n");

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');

printf("\n");
return 0;
}