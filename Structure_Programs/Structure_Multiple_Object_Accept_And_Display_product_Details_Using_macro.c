#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Pcount 5

struct product
{
    int p_Id;
    char P_Name[20];
    float p_p_price;
    float p_s_price;
};

int main ()
{
    int i=0;
    struct product prod[Pcount];
    
    printf("\n\n Accepting product Details => \n");
    
      for(i=0;i<Pcount;i++)
      {
          printf("\n Enter product Id =");
          scanf("%d",&prod[i].p_Id);
           
          printf("\n Enter product Name =");
          scanf(" %[^n]",&prod[i].P_Name);
          
          printf("\n Enter product purchase price =");
          scanf("%f",&prod[i].p_p_price);
          
          printf("\n Enter product sales price");
          scanf("%f",&prod[i].p_s_price);
      }
      
      getch();
    
      printf("\n ======= ******* ======== \n");
      
      printf("\n Display product Details =\n");
      
        for(i=0;i<Pcount;i++)
        {
            printf("\n %d product Details =",i+1);
            
            printf("\n Id=%d", prod[i].p_Id);
            printf("\n Name =%s",prod[i].P_Name);
            printf("\n purchase price= %0.2f",prod[i].p_p_price);
            printf("\n sales price =%0.2f",prod[i].p_s_price);
        }
        
      printf("\n ======= ******* ======== \n");
      
      getch();
      return 0;
      
 }