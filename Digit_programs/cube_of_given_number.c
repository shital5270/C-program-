#include <stdio.h>
#include <conio.h>
int main ()
{
  int num=0;
  
  up:
  printf("\n\t ======*****====== \n");
    
  printf("\n\t enter a positive integer number =");
  scanf("%d",&num);
  
  if(num<=0)
  {
  printf("\n\t invalid number \n\n\t please enter another number");
  goto up;
  }
  printf("\n\t square of %d=%d ",num,num*num*num);
  printf("\n\n\t ======*****====== \n");
  printf("\n thanks \n");
  
  getch();
  return 0;
 }
  