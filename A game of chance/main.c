#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
     int mypoint;
     int number1,number2;
     int sum;


     srand(time(NULL));

     number1 =  (rand()%6) + 1 ;
     number2 =  (rand()%6) + 1;

     while(1)
     {
         sum=number1+number2;
       printf("your firs number is :  %d\n",number1);
       printf("your secon number is :  %d\n",number2);
       printf("The sum is %d\n",sum);


         if (sum==7 || sum==11 )
         {
             system("color 27");
             printf("\nplayer won!");
             break;

         }else if (sum==2 || sum==3 || sum==12)
         {
             system("color 47");
             printf("\nplayer loses!");
             break;
         }else if(sum==4||sum==5||sum==6||sum==8||sum==9||sum==10)
         {
             printf("\nPoint is %d\n\n",sum);
             mypoint=sum;

             while(1)
             {
                 number1=rand()%6+1;
                 number2=rand()%6+1;
                 sum=number1+number2;

                printf("your firs number of second throw is :  %d\n",number1);
                printf("your secon number of second throw is :  %d\n",number2);
                printf("The sum is : %d\n",sum);

                 if(sum==7)
                 {
                     system("color 47");
                     printf("\nPlayer loses!\n");
                     break;

                 }else if(sum==mypoint)
                 {
                     system("color 27 ");
                     printf("\nPlayer won!!");
                     break;
                 }
             }
                      break;
          }

     }


    return 0;
}
