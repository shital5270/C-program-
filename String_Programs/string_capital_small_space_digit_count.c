#include <stdio.h>
#include <conio.h>

int main ()
{
      char cSrc[50] = {'\0'};
      int i=0,dcnt=0,smcnt=0,capcnt=0,spcnt=0;
      
      puts("\n Enter a string ");
      gets(cSrc);
      
      while(cSrc[i] !='\0')
      {
          if(cSrc[i] >= 'a'&& cSrc[i] <= 'z')
          {
              smcnt++;
          }
          if(cSrc[i] >= 'A'&& cSrc[i] <= 'Z')
          {
              capcnt++;
          }
          if(cSrc[i] >= '0'&& cSrc[i] <= '9')
          {
              dcnt++;
          }
          if(cSrc[i] == ' '|| cSrc[i] == '\t')
          {
              spcnt++;
          }
          
          i++;
      }
      printf("\n small count in given string is = %d",smcnt);
      printf("\n capital count in given string is = %d",capcnt);
      printf("\n digit count in given string is = %d",dcnt);
      printf("\n space count in given string is = %d",spcnt);
      
      getch();
      return 0;
 
 }