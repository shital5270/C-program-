#include <stdio.h>
#include <conio.h>

int main ()
{
      char cSrc[50] = {'\0'};
      int i=0;
      
      puts("\n Enter a string ");
      gets(cSrc);
      
      printf("\n Given string is = %s",cSrc);
      
      while(cSrc[i] !='\0')
      {
          if(cSrc[i] >= 'a'&& cSrc[i] <= 'z')
          {
              cSrc[i]=cSrc[i]-32;
          }
          else if(cSrc[i] >= 'A'&& cSrc[i] <= 'Z')
          {
              cSrc[i]=cSrc[i]+32;
          }
          i++;
      }
      
      printf("\n Given string is = %s",cSrc);
      
      getch();
      return 0;
      
 }