#include <stdio.h>
#include <conio.h>
int main()
{
  int num=0,temp=0,rem=0,rev=0;
  
  printf("\n enter a integer");
  scanf("%d",&num);
  temp=num;
  
  while (num>0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  while (num<0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  if(temp==rev)
  printf("number is palindrome");
  else
  printf("number is not palindrome");
  
  getch();
  return 0;
 }