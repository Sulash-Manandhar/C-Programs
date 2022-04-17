#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   FILE *f1;
   char name[20],ans;
   int eid,sal;
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\employee_data.txt","w");
   if(f1==NULL)
   {
      printf("Error in creating file.");
      exit(0);
   }
   do
   {
      system("cls");
      printf("Enter employee id,name and salary:");
      scanf("%d%s%d",&eid,name,&sal);
      fprintf(f1,"%d\t%s\t%d\n",eid,name,sal);
      fflush(stdin);
      printf("Do u want to continue:");
      ans=getchar();
   }while(ans=='Y'||ans=='y');
   printf("Success.");
   fclose(f1);
   getch();
}
