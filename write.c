//WAP to write a file name sample.txt
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1;
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\write.txt","w");
    char ch;
    if(f1==NULL)
    {
        printf("File not made.");
        exit(0);
    }
    printf("Enter the content u want to write:");
    while((ch=getchar())!=EOF)
    {
        fputc(ch,f1);
    }
    fclose(f1);
    getch();
}
