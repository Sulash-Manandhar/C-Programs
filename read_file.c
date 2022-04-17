#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("Mycollagename.txt","r");
    if(fp==NULL)
    {
        printf("File not found.");
        getch();
    }
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {

            putchar(ch);
        }
    }
    fclose(fp);
    getch();
}
