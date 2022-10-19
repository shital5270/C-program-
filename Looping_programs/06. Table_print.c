#include <stdio.h>
#include <conio.h>
int main()
{
  int num,i;
  printf("enter any number to get it's table");
  scanf("%d",&num);
  for(i=1;i<=10;i++)
  {
    printf("\n %d * %d = %d",num,i,(num*i));
  }
  return 0;
  }
