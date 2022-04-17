//WAP to read roll,name and marks in C of students
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1;
    int roll;
    float comp;
    char fname[20],ans;
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\record.txt","w");
    if(f1==NULL)
    {
       printf("Error on making file.");
       exit(0);
    }
    //fprintf(f1,"Roll\tName\tMarks in C\n");
    do
    {
       system("cls");
       printf("Enter roll,name and marks in C:");
       scanf("%d%s%f",&roll,fname,&comp);
       fprintf(f1,"%d\t%s\t%.2f\n",roll,fname,comp);
       fflush(stdin);
       printf("Do u want to continue:");
       ans=getchar();
    }while(ans=='Y' || ans=='y');
    printf("Successfully uploaded.");
    fclose(f1);
    getch();

}
