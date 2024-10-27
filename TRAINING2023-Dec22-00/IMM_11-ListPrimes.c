#include <stdio.h>
#include <string.h>

struct StructureIntro
{
    int roll;
    int marks;
    float percentage;
    char grade;
    char name[10];
    int arr[10];
};

int main()
{
printf("\n");
    
    struct StructureIntro struct_var;

    // struct_var.roll = 2;
    // struct_var.marks = 96;
    // struct_var.percentage = 96.8;
    // struct_var.grade = 'A';
    // struct_var.name[0] = 'A';
    // struct_var.name[1] = 'N';
    // struct_var.name[2] = 'U';
    // struct_var.name[3] = 'P';
    // struct_var.name[4] = '\0';
    // strcpy(struct_var.name, "Anup");

    scanf("%d", &struct_var.roll);
    scanf("%d", &struct_var.marks);
    scanf("%f", &struct_var.percentage);
    scanf("%c", &struct_var.grade);
    scanf("%s", &struct_var.name);


    printf("My Roll : %d\n", struct_var.roll);
    printf("My Marks : %d\n", struct_var.marks);
    printf("My Percentage : %f\n", struct_var.percentage);
    printf("My Grade : %c\n", struct_var.grade);
    printf("My Name : %s\n", struct_var.name);
    printf("\n");


    printf("Size of Integer : %d\n", sizeof(int));
    printf("Size of Float : %d\n", sizeof(float));
    printf("Size of Char : %d\n", sizeof(char));
    printf("Size of Structure : %d\n", sizeof(struct_var));
    printf("\n");

    printf("Size of int : %d and - it's Location is %d \n", (int)sizeof(struct_var.roll), &struct_var.roll);
    printf("Size of int : %d and - it's Location is %d \n", (int)sizeof(struct_var.marks), &struct_var.marks);
    printf("Size of float : %d and - it's Location is %d \n", (int)sizeof(struct_var.percentage), &struct_var.percentage);
    printf("Size of char : %d and - it's Location is %d \n", (int)sizeof(struct_var.grade), &struct_var.grade);
    printf("Size of char : %d and - it's Location is %d \n", (int)sizeof(struct_var.name), &struct_var.name);
    printf("\n");

    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.name[0]), &struct_var.name[0]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.name[1]), &struct_var.name[1]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.name[2]), &struct_var.name[2]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.name[3]), &struct_var.name[3]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.name[4]), &struct_var.name[4]);
    printf("\n");

    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.arr[0]), &struct_var.arr[0]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.arr[1]), &struct_var.arr[1]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.arr[2]), &struct_var.arr[2]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.arr[3]), &struct_var.arr[3]);
    printf("Size of Array : %d and - it's Location is %d \n", (int)sizeof(struct_var.arr[4]), &struct_var.arr[4]);

printf("\n\n");
return 0;
}