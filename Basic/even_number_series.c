#include <stdio.h>
#include <conio.h>
int main()
{
  int istart=0,iend=0;
  
  printf("\n\t enter starting number =");
  scanf("%d",&istart);
  
  printf("\n\t enter ending number =");
  scanf("%d",&iend);
 
  while (istart<=iend)
  {
    if(istart %2==0)
    {
      printf("\n\t %d",istart);
    }
    istart ++;
  }
  printf("\n\t\t Thanks !!! \n");
  
  getch();
  return 0;
 }