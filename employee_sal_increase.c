#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   FILE *f1,*f2;
   char name[20],ans;
   int eid,sal;
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\employee_data.txt","r");
   f2=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\temp.txt","w");
   if(f1==NULL || f2==NULL)
   {
      printf("Error in increasing salary");
      exit(0);
   }
   while(fscanf(f1,"%d%s%d",&eid,name,&sal)!=EOF)
   {
      sal=1.2*sal;
      fprintf(f2,"%d\t%s\t%d\n",eid,name,sal);
   }
   printf("SUCCESS");
   fclose(f1);
   fclose(f2);
   rename("E:\\SuAsh\\Files\\file handling\\txt files\\temp.txt","E:\\SuAsh\\Files\\file handling\\txt files\\employe_update.txt");
   getch();
}
