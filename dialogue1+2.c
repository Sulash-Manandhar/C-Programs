#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp, *f1, *f2;
    char ch,ch1,ch2;
    fp=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\Join.txt","w");
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\dialogue.txt","r");
    f2=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\dailouge2.txt","r");
    if(fp==NULL || f1==NULL || f2==NULL)
    {
        printf("File creation error.");
        exit(0);
        getch();
    }
    else
    {

        fprintf(fp,"Joining dialogue 1 and dialogue 2:\n");
        while((ch=fgetc(f1))!=EOF)
        {

            fputc(ch,fp);

        }
        fprintf(fp,"\n");
        while((ch1=fgetc(f2))!=EOF)
        {

            fputc(ch1,fp);

        }

        printf("Success.");
        system("cls");
        while((ch2=fgetc(fp))!=EOF)
        {
            fputc(ch,fp);
        }
        fclose(fp);
        fclose(f1);
        fclose(f2);
        getch();

    }
}
