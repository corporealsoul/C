#include <stdio.h>

int c_function(char ch_arr[])
{
    int loop;
    int string_length = 0;

    for (loop = 0; ch_arr[loop] != '\0'; loop++)
    {
        string_length ++;
    }
    printf("%d ", string_length);
return 0;
}

int main()
{
    char ch_arr[20] = {"aabhronkl"};
    c_function(ch_arr);
}
