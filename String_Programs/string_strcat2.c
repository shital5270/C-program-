#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
      char FristName[20] = "";
      char LastName[20] = "";
      char Name[40] = "";
      
      printf("\n Enter Frist Name ");
      gets(FristName);
      printf("\n Enter Last Name ");
      gets(LastName);
      
      printf("\n Frist Name Entered is = %s", FristName);
      printf("\n Last Name Entered is = %s", LastName);
      
      printf("\n\n ======******====== \n");
      printf("\n Name Generated is =%s",Name);
      printf("\n\n ======******====== \n");
      
      getch();
      
      printf("\n\n ======******====== \n");
      
      printf("\n Frist Name Entered is = %s",FristName);
      printf("\n Last Name Entered is = %s",LastName);
      
      getch();
      return 0;
      
 }
      