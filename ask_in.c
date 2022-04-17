#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1,*f2;
    char ch,path[40];
    f2=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\SHOW.txt","w");
    printf("Enter the path of a file u want to open:");
    //fflush(stdin);
    scanf("%s",&path);
    f1=fopen(path,"r");
    system("cls");
    if(f1==NULL)
    {
        printf("'\%s'\ source file not found.",path);
        exit(0);
    }
    else
    {
        printf("SUCCESS");
        //while((ch=fgetc(f2))!=EOF)
    }
    fclose(f1);
}
