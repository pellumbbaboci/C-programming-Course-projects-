#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

exchange_money(float,char,char);


int main()
{
    float moneyy;
    char have_type[4];
    char exhange[4];

    printf("For turkish TRY,\t For euro EU,\t For dolar USD\n\n");

    printf("Enter your all money!");
    scanf("%f",&moneyy);
    printf("Enter your money type !");
    scanf("%s",have_type);
    printf("Enter your money type you want to exhange!");
    scanf("%s",exhange);

    exchange_money(moneyy,have_type,exhange);


    return 0;
}


int exchange_money(float money,char moneyyouhave[], char moneyyouexhange[] )
{
      float result=0;
      if(strcmp(moneyyouhave, "TRY") ==0 && strcmp(moneyyouexhange,"USD")==0)
      {
          result=money/3.5;
           printf("\n%.2f %s  =  %.2f %s",money,moneyyouhave,result,moneyyouexhange);
      }
      if(strcmp(moneyyouhave, "USD") ==0 && strcmp(moneyyouexhange,"TRY")==0)
      {
          result=money*3.5;
           printf("\n%.2f %s  =  %.2f %s",money,moneyyouhave,result,moneyyouexhange);
      }
      if(strcmp(moneyyouhave, "TRY") ==0 && strcmp(moneyyouexhange,"EU")==0)
      {
          result=money/3.7;
           printf("\n%.2f %s  =  %.2f %s",money,moneyyouhave,result,moneyyouexhange);
      }
      if(strcmp(moneyyouhave, "EU") ==0 && strcmp(moneyyouexhange,"TRY")==0)
      {
          result=money*3.7;
           printf("\n%.2f %s  =  %.2f %s",money,moneyyouhave,result,moneyyouexhange);
      }
      if(strcmp(moneyyouhave, "EU") ==0 && strcmp(moneyyouexhange,"USD")==0)
      {
          result=money*1.5;
           printf("\n%.2f%s = %.2f%s",money,moneyyouhave,result,moneyyouexhange);
      }
      if(strcmp(moneyyouhave, "USD") ==0 && strcmp(moneyyouexhange,"EU")==0)
      {
          result=money/1.5;
           printf("\n%.2f%s = %.2f%s",money,moneyyouhave,result,moneyyouexhange);
      }
     return result;
}






