#include <stdio.h>
#include <conio.h>

int main ()
{
  int Num1=0,Num2=0;
  up:
  printf("\n\t ======*****====== \n");
  
  printf("\n\t enter a first positive integer number \n");
  scanf("%d",&Num1);
  
  printf("\n\t enter a second positive integer number \n");
  scanf("%d",&Num2);
  
   while(Num1<Num2)
  {
    printf("\n\t square of %d=%d",Num1,Num1*Num1);
    Num1++;
  }
    
  printf("\n\n\t =======*****====== \n");
  printf("\n\t thanks !!!");
  
  getch();
  return 0;
 }
  
