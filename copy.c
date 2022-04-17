#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1,*f2;
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\sample_text.txt","r");
    f2=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\sample_text_copied.txt","w");
    char ch;
    if(f1==NULL || f2==NULL)
    {
        printf("Error in copying.");
        exit(0);
    }
    else
    {
        printf("Copying...");
        while((ch=fgetc(f1))!=EOF)
        {
            fputc(ch,f2);

        }
        //getch();
        //system("cls");
        printf("\nSUCCESSFULLY COPIED.");
    }
    fclose(f1);
    fclose(f2);
}
