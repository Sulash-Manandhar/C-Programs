//READ any file using file handling
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1;
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\my_country_name.txt","r");
    char ch;
    if(f1==NULL)
    {
        printf("File not found.");
        exit(0);
    }
    printf("The content of the file:\n");
    while((ch=fgetc(f1))!=EOF)
    {
        putchar(ch);
    }
    fclose(f1);
    getch();
}
