#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1;
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\dialogue.txt","w");
    char dialogue[]="U ya u what are u gonna do hha u punk.";
    if(f1==NULL)
    {
        printf("File creation error.");
        getch();
    }
    else
    {
        fprintf(f1,"Dialogue: %s",dialogue);
        printf("Success");
    }
    fclose(f1);
    getch();
}
