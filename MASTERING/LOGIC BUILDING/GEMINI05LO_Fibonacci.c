#include<stdio.h>
#include<conio.h>

int main()
{       int loop;
	int range = 5;
	int past = 0, present = 1, next;
clrscr();
	printf("%d %d ", past, present);

	for(loop = 1 ; loop <= range ; loop++)
	{

		next = past + present;

		past = present;
		present = next;

		printf("%d ", present);

	}
getch();
return 0;
}