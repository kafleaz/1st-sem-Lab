#include <stdio.h>

int main()
{
   int i,sum=0;
   printf("Numbers greater than 100 and less than 200, divisible by 7:\n");
   for(i=101;i<200;i++)
   {
     if(i%7==0)
     {
       printf("% d",i);
       sum=sum+i;
     }
   }
   printf("\nThe sum of all integer:%d ",sum);
}
