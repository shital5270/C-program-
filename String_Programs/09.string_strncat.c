#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
      char FristName[20] = "";
      char LastName[20] = "";
     
      printf("\n Enter Frist Name ");
      gets(FristName);
      printf("\n Enter Last Name ");
      gets(LastName);
      
      printf("\n Frist Name Entered is = %s", FristName);
      printf("\n Last Name Entered is = %s", LastName);
      
      strncat(FristName, LastName,3);
      
      getch();
      printf("\n =======*********======= \n");
      
      printf("\n After strncat call Frist Name Entered is = %s",FristName);
      printf("\n After strncat call Last Name Entered is = %s", LastName);
      
      getch();
      return 0;
      
 }
  
