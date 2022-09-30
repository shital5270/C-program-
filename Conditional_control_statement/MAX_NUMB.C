#include <stdio.h>
#include <conio.h>
int main()
{
	int num1=0,num2=0;

	printf("\n enter 1st number");
	scanf("%d",&num1);
	printf("\n enter 2nd number");
	scanf("%d",&num2);

	if(num1>num2)
	{
		printf("\n number %d is maximum ",num1);
	}
	else
	{
		printf("\n number %d is maximum",num2);
	}
	printf("\n thanks !!!");
	getch();
	return 0;
}
