// #include<stdio.h>

// void modify_array(int[], int);

// void modify_array(int int_array[], int size){

//     for (int i = 0; i < size; i++)
//     {
//         int_array[i] = int_array[i] * 2;
//     }
// }


// int main(){
// printf("\n");

//     int int_array[] = {1, 2, 3, 4, 5};
//     int size;

//     size = sizeof(int_array)/sizeof(int_array[0]);

//     modify_array(int_array, size);

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", int_array[i]);
//     }

// printf("\n");
// return 0;
// }





// above Is Equvalent to Below





#include<stdio.h>

// Function declaration: Takes an array (as a pointer) and its size as arguments
void modify_array(int[], int);

// Function definition: Modifies the elements of the array
void modify_array(int *int_array, int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; i++) {
        int_array[i] = int_array[i] * 2;  // Multiply each element by 2 and store it back in the array
    }
}

int main() {
    printf("\n");  // Just to add a newline for better formatting

    // Declare and initialize an array of integers
    int int_array[] = {1, 2, 3, 4, 5};  // Original array
    int size;  // Variable to store the size of the array

    // Calculate the number of elements in the array
    size = sizeof(int_array) / sizeof(int_array[0]);  
    // sizeof(int_array) gives the total size of the array in bytes
    // sizeof(int_array[0]) gives the size of one element (4 bytes for int)
    // Dividing these gives the number of elements in the array

    // Call the function to modify the array by passing it and its size
    modify_array(int_array, size);  
    // int_array is passed as a pointer to the first element (array decay)

    // Loop through the modified array and print each element
    for (int i = 0; i < size; i++) {
        printf("%d ", int_array[i]);  // Print the modified element (which is now doubled)
    }

    printf("\n");  // Add a newline for better formatting

    return 0;  // Program ends
}






// Simplified example

// #include <stdio.h>

// void modify_first_element(int arr[]) {
//     arr[0] = 100;  // Modifies the first element of the array
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     modify_first_element(arr);  // Passing array to function

//     printf("%d\n", arr[0]);  // Prints 100, because the original array was modified

//     return 0;
// }
