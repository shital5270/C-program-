#include <stdio.h>
#include <conio.h>
int main ()
{
  int num=0,cnt=0;
  
  printf("\n\t enter positive integer number");
  scanf("%d",&num);
  
  for (cnt=1;cnt<=num;cnt++)
  {
    printf("\n\t %d",cnt);
  }
  
  printf("\n\t\t thanks !!!");
  
  getch();
  return 0;
 }