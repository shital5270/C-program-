#include <stdio.h>
#include <conio.h>
int main()
{
  char ch='10';
  
  printf("\n\t enter your character");
  scanf("%c",&ch);
  
  if(ch<='A'&& ch>= 'Z')
  {
    printf("\t enter your character");
  }
  else if(ch>='a'&& ch<='z')
  {
    printf("\n\t enter your character is lowercase \n");
  }
  else if (ch>='A'&& ch<= 'Z')
  {
    printf("\n\t entered character is uppercase \n");
  }
  else
  {
    printf("\n\t entered letter is neither uppercase nor lowercase");
  }
  getch();
  return 0;
 }