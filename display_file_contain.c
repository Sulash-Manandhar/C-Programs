#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp,*f1;
    fp=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\display_contain.txt","w");
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\Join.txt","r");
    char ch;
    if(fp==NULL)
    {
        printf("File not found.");
        exit(0);
    }
    else
    {
        f1=fopen("E:\\","r");
        printf("Displaying the content of the file:\n");
        while(fscanf(f1,"%d%s%f%f%f%f",&roll,name,&math,&sci,&comp,&eng)!=EOF)
        {
            printf(f1,"%d\t%s\t%f\t%f\t%f\t%f\n",roll,name,math,sci,comp,eng);
        }
        printf("\nSuccess.");
        fclose(f1);
    }
    fclose(fp);
    fclose(f1);
    getch();
}
