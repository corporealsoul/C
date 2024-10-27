#include<stdio.h>
#include<conio.h>

int main()
{        int container_one = 4, container_two = 5, temp_container;
clrscr();
	printf("Before swap container_one : %d and container_two : %d\n", container_one, container_two);
	temp_container = container_one;
	container_one = container_two;
	container_two = temp_container;
	printf("After swap container_one : %d and container_two : %d\n", container_one, container_two);
getch();
return 0;
}