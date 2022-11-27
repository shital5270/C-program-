#include<stdio.h>
#include<conio.h>
int main()
{
	int num1=0,num2=0;
	Accept:
	printf("\n enter 2 integer numbers to find max from them");
	scanf("%d%d",&num1,&num2);

	if(num1==num2)
	{
		printf("\n both numbers are equal");
		printf("\n ======*****======");
		printf("\n\n for comparision there should be 2 different numbers\n");
		goto Accept;
	}

	if(num1>num2)
	{
		printf("\n Given 1st number %d is maximum ",num1);
	}
	else
	{
		printf("\n Given 2nd number %d is maximum",num2);
	}
	printf("\n\n thanks !!!");
	getch();
	return 0;
}
