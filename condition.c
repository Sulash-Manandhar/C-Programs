#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   int h1;
   do
   {
      printf("your name is ......\n");
      fflush(stdin);
      printf("do u want to continue:");
      scanf("%c",ch);
   }while(ch=='y' || ch=='Y');
   getch();
}
