#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter number\n");
scanf("%d",&a);
if(a%2==0)
{
printf("%d is even",a);
}
if(a%2 !=0)
{
printf("%d is odd",a);
}
getch();
}


