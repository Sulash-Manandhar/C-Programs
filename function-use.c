#include<stdio.h>
#include<conio.h>
int greatest(int,int,int);
void main()
{
   int a,b,c,total;
   printf("Enter any 3 number:");
   scanf("%d%d%d",&a,&b,&c);
   total=greatest(a,b,c);
   printf("greatest=%d",total);
   getch();
}
int greatest(int a,int b)
{
   int g;
   g=(a>b && a>c)?a:b;

}

