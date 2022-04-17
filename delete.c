#include<stdio.h>
#include<conio.h>
void main()
{
   int a=5;
   char name[16],ans;
   do
   {
   printf("Enter your name:\n");
   scanf("%[^\n]",&name);
   printf("\aYour name:%s",name);
   fflush(stdin);
   printf("\nDo u want to continue:");
   ans=getchar();
   system("cls");
   }while(ans=='Y'||ans=='y');
   getch();
}
