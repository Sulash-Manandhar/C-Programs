#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,cnt=0;
   for(i=1;i<=100;i++)
   {
      for(j=1;j<=i;j++)
      {
         if(i%j==0)
         {
            cnt++;
         }
      }
       if(cnt==2)
         {
            printf("%d\t",i);
         }
         cnt=0;
   }
}

