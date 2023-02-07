#include <stdio.h>
#include <conio.h>
int main ()
{
  int no=0,cnt=0;
  
  printf("\n enter number to print it's reverse table =");
  scanf("%d",&no);
  
  printf(" \n ***** \n");
  
  cnt=10;
  
  while (cnt>=1)
  {
    printf("\n\t %d",no*cnt);
    cnt --;
  }
  printf(" \n thanks !!! \n");
  
  getch();
  return 0;
 }
