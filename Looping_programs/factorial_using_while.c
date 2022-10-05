#include <stdio.h>
#include <conio.h>
int main ()
{
  int num=0,temp=0,fact=0;
  
  printf("\n\t enter a number for finding factorial =");
  scanf("%d",&num);
  
  fact=1;
  temp=num;
  
  while(temp>1)
  {
    fact=fact*temp;
    temp--;
  }
  printf("\n\t factorial of %d=%d",num,fact);
  
  getch();
  return 0;
 }