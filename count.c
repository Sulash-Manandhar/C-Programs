#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
   FILE *f1,*f2;
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\children_story.txt","r");
   f2=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\count.txt","w");
   int vow=0,con=0,s=0,num=0;
   char ch;
   if(f1==NULL || f2==NULL)
   {
      printf("Error on counting.");
      exit(0);
   }
   while((ch=fgetc(f1))!=EOF)
   {
      strupr(ch);
      if(ch>=65 && ch>=96)
      {
         if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vow++;
         else
            con++;
      }
      else if(ch<=9 && ch>=0)
         num++;
      else
         s++;

   }
   fprintf(f2,"NO of vowel,consonant, digit, special character in the story is:\n");
   fprintf(f2,"Vowel:%d\n",vow);
   fprintf(f2,"Consonant:%d\n",con);
   fprintf(f2,"Digits:%d\n",num);
   fprintf(f2,"Special character:%d",s);
   printf("Success");
   fclose(f1);
   fclose(f2);
   getch();
}
