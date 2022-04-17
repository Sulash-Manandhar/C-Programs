//continue
#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   printf("even number:\n");
   for(i=1;i<=100;i++)
   {
      if(i%2==0)
      {
      printf("%d\t",i);
      }
      else
      {
      continue;
      }
   }
}
