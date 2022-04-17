#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   FILE *f1,*f2;
   int eid,sal,eno;
   char name[20];
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\employee_data.txt","r");
   f2=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\temp1.txt","w");
   if(f1==NULL || f2==NULL)
   {
      printf("ERROR!!!");
      exit(0);
   }
   printf("Enter employee id no:");
   scanf("%d",&eno);
   while(fscanf(f1,"%d%s%d",&eid,name,&sal)!=EOF)
   {
      if(eid==eno)
         continue;
      fprintf(f2,"%d\t%s\t%d\n",eid,name,sal);
   }
      fclose(f1);
      fclose(f2);
      printf("SUCCESS");
      getch();
   }




