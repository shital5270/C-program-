#include <stdio.h>
#include <conio.h>
int main()
{
  int Num1;
  printf("\n enter a number");
  scanf("%d",&Num1);
  if(Num1>0)
      printf("\n entered number is=%d positive integer",Num1);
  else
      printf("\ entered number is=%d negative integer",Num1);
  getch();
  return 0;
}