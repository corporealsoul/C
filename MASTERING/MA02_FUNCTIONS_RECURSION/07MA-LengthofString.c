#include <stdio.h>

int c_recursion(char ch_arr[]) {
    if (ch_arr[0] == '\0') {
        return 0;
    }
    return 1 + c_recursion(ch_arr + 1);
}

int main() {
    char ch_arr[20] = "aabhronkl";
    int length = c_recursion(ch_arr);
    printf("Length of the string: %d\n", length);
    return 0;
}
