#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
      for(j=1;j<=10;j++)
      {
         if((i>=4 && i<=8) && (j>=2 && j<=5))
            printf("\t");
         else
            printf("%d\t",j);
      }
      printf("\n");
   }
}
