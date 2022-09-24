#include <stdio.h>
#include <conio.h>
int main()
{
  int r=0,c=0;
  printf(" enter a pattern\n");
  
  for(r=1;r<=4;r++)
  { 
    for(c=1;c<=5;c++)
    {
      if(r==1||c==1||r==4||c==5)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
  return 0;
 }
 