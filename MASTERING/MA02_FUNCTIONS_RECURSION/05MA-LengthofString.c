#include <stdio.h>

int main()
{
    int loop;
    char ch_arr[20] = {"aabhronkl"};
    int string_length = 0;

    for (loop = 0; ch_arr[loop] != '\0'; loop++)
    {
        string_length ++;
    }
    printf("%d ", string_length);
}
