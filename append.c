#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *f1;
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\my_country_name.txt","r");
   char ch;
   if(f1==NULL)
   {
      printf("File not found.");
   }
   else
   {
      printf("Content of file:\n");
      while((ch=fgetc(f1))!=EOF)
      {
         putchar(ch);
      }
   }
   fclose(f1);
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\my_country_name.txt","a");
   printf("\nEnter the content u want to write:\n");
   while((ch=getchar())!=EOF)
   {
      fputc(ch,f1);
   }
   printf("Success.");
   fclose(f1);
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\my_country_name.txt","r");
   if(f1==NULL)
   {
      printf("File not found.");
   }
   else
   {
      printf("Content of file after append:\n");
      while((ch=fgetc(f1))!=EOF)
      {
         putchar(ch);
      }
   }
}
