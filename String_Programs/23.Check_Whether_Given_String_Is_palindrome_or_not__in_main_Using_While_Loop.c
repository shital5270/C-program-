#include <stdio.h>
#include <conio.h>

int main ()
{
      char cSrc[50] = {'\0'};
      int i=0,j=0;
      
      puts("\n Enter a string ");
      gets(cSrc);
      
      while(cSrc[i] !='\0')
      {
            i++;
      }
      i--;
      
      while(i>=j)
      {
          if(cSrc[i] != cSrc[j])
          {
                break;
          }
          i--;
          j++;
      }
      if(i<=j)
      
      printf("\n Given String is palindrome !!!",cSrc);
      
      else

      printf("\n Given String is not palindrome !!!",cSrc);
      
      getch();
      return 0;
      
 }
      
