#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
      int count =0;
      char Name[20] ="";
      char SNm[20] ="";
      
      printf("\n Enter Name1 = ");
      gets(Name);
      printf("\n Enter Name2 = ");
      gets(SNm);
      
      count=strcmp(Name,SNm);
      
      if(count ==0)
      {
          printf("\n Both Strings are Same ");
      }
      else
      {
          printf("\n Both Strings are different ");
      }
      
      getch();
      return 0;
      
 }
