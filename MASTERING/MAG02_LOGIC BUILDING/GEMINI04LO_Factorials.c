#include<stdio.h>
#include<conio.h>

int main()
{
	int range = 3, i, store = 1;
clrscr();
	for(i = 1 ; i <= range ; i++)
	{
		store = store * i;
	}
	printf("%d", store);
getch();
return 0;
}