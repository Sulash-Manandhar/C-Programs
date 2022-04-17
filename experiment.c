#include<stdio.h>
#include<conio.h>
void main()
{
   char name[20],ans[5];
   printf("enter your name: ");
   gets(name);
   printf("enter (y/n):");
   scanf("%c",&ans);
   if(ans=='y' || ans=='Y')
   {
        printf("your name is %s",name);
   }
}
