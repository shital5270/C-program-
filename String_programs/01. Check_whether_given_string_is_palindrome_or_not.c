#include <stdio.h>
#include <conio.h>
int main ()
{
  int i=0,j=0;
  char cSrc[50]={'\0'};
  
  puts(" Enter a string ");
  gets(cSrc);
  
  while (cSrc[i]!='\0')
  { 
    i++;
  } 
  i--;
  
  while (i>j)
  {
    if(cSrc[i]!=cSrc[j])
    {
      break;
    }
    i--;
    j++;
  }
  
  if(i<=j)
  {
    printf("\n given string %s is palindrome ",cSrc);
  }
  else
  {
    printf("\n given string %s is not palindrome ",cSrc);
  }
  getch();
  return 0;
 }
