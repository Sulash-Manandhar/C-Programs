//WAP to read record of "record.txt"and display in monitor.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   FILE *f1;
   char ch,fname[20];
   int roll;
   float comp;
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\record.txt","r");
   if(f1==NULL)
   {
      printf("File not found.");
      exit(0);
   }
   printf("Detail info of students.\n");
   printf("Roll\tName\tMarks in C\n");
   while(fscanf(f1,"%d%s%f",&roll,fname,&comp)!=EOF)
   {
      printf("%d\t%s\t%f\n",roll,fname,comp);
   }
   fclose(f1);
   getch();
   }
