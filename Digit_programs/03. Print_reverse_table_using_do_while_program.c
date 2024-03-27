#include <stdio.h>
#include <conio.h>
int main ()
{
  int no=0,cnt=0;
  
  printf("\n enter number for print it's reverse table =");
  scanf("%d",&no);
  
  cnt=10;
  do
  {
    printf("\n\t %d",no*cnt);
    cnt --;
  }
  while (cnt>=1);
  
  printf("\n\t thanks !!! \n");
  
  getch();
  return 0;
 }
  
