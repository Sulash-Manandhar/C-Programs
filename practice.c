#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1;
    f1=fopen("Practice.txt","w");
    char ch;
    if(f1==NULL)
    {
        printf("File creation error.");
        exit(0);
    }
    else
    {
        printf("Enter the contain u want to add:");
        while((ch=getchar())!=EOF)
        {
            fputc(ch,f1);
        }
    }
    fclose(f1);
    getch();
}
