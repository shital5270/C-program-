#include<stdio.h>
#include<conio.h>
int main()
{
	int No=0,dsum=0,Temp=0,Dig=0;

	up:
	printf("\n\n Enter positive integer number to calculate sum of digits =");
	scanf("%d",&No);

	if(No<=0)
	{
		printf("\n Invalid number please enter positive integer number.");
		goto up;
	}

	Temp=No;

	whilw(Temp>0)
	{
		Dig=Temp%10;
		dsum=dsum+Dig;
		Temp=Temp/10;
	}
	printf("\n\n sum of digits in given number %d is %d",N0,dsum);

	getcg();
	return 0;
}
