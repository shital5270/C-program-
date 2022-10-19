#include <stdio.h>
#include <conio.h>
int main ()
{
  int i=0,value[3]={0};
  
  for(i=0;i<3;i++)
  {
     printf("\n enter element no %d=",i+1);
     scanf("%d",&value[i]);
  }
  
  printf("\n press key to move ahead");
  printf("\n\n elements is array are => \n\n");
  
  for(i=0;i<3;i++)
  {
    printf("\n value of %d element =%d",i+101,value[i]);
  }
  
  getch();
  return 0;
 }
