#include <stdio.h>
#include <conio.h>

int main ()
{
      char cSrc[50] = {"\0"};
      int i=0,cnt=0;
      
      puts("\n Enter a string ");
      gets(cSrc);
      
      while(cSrc[i] !='\0')
      {
          if(cSrc[i] != ' '&& cSrc[i] != '\t')
          {
              cnt++;
          }
          i++;
      }
      
      printf("\n No space Length of<%s> string is =%d",cSrc,cnt);
      
      getch();
      return 0;
 
 }
