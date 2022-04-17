#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  FILE *f1;
  char ch;
  f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\dailouge2.txt","w");
  if(f1==NULL)
  {
      printf("File creation error.");
      getch();
  }
  else
  {
      printf("Enter a dialogue u want to write:");
      fprintf(f1,"Dialogue 2:");
      while((ch=getchar())!=EOF)
      {
          printf("%s",ch);
      }
      fclose(f1);
      getch();
  }
}
