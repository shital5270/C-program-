#include <stdio.h>
#include <conio.h>
int main()
{
  int Rad=0;
  float pi=3.14;
  float Area=0.0;
  
  printf("\n\t enter radius of Circle=");
  scanf("%d",&Rad);
  
  Area=pi*Rad*Rad;
  
  printf("\n\t area of circle=%0.2f",Area);
  
  printf("\n\t\t thanks !!!");
  
  getch();
  return 0;
 }
