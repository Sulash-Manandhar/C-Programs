//fabonaciis
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,a=0,b=1,c=0;
   printf("Enter no of terms:");
   scanf("%d",&n);
   printf("Series:\n");
   for(i=1;i<=15;i++)
   {
      printf("%d\t",a);
      c=a+b;
      a=b;
      b=c;
   }
}
