// #include <stdio.h>
// #include <stdlib.h>
//
// int main() {
//     printf("\n");
//
//     int *student;
//     int numStudents = 12;
//
//     student = (int *) malloc (numStudents * sizeof(int));
//     printf("Student address of student = %p\n", student);
//     printf("Student address of student = %d\n", sizeof(student));
//
//     for (int i = 0; i < numStudents; i++) {
//         student[i] = i;
//     }
//     free(student);
//
//     printf("\n");
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n");

    int *student;
    int numStudents = 12;

    student = (int *) calloc (numStudents, sizeof(int));
    printf("Student address of student = %p\n", student);
    printf("Student address of student = %d\n", sizeof(student));

    for (int i = 0; i < numStudents; i++) {
        student[i] = i;
    }
    free(student);

    printf("\n");
    return 0;
}
