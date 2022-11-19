#include<stdio.h>
#include<conio.h>
int main ()
{
	int num=0,cnt=0;

	printf("\n\t Enter positive integer number =");
	scanf("%d",&num);

	for(cnt=1;cnt<=num;cnt++)
	{
		printf("\n\t %d",cnt);
	}

	printf("\n\n\t Thanks !!! ");

	getch();
	return 0;
}
