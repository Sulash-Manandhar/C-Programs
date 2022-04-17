#include<stdio.h>
#include<conio.h>
struct student
{
  int roll;
  char name[25];
  float comp;
};
void main()
{
    struct student std[100];
    int n,i,sum=0;
    float avg;
    printf("Enter no of student: ");
    scanf("%d",&n);
    //scanning input
    for(i=0;i<n;i++)
    {
        system("cls");
        printf("For student no %d:\n",i+1);
        printf("Enter roll no(1<=x<=99):");
        scanf("%d",&std[i].roll);
        printf("Enter name:");
        scanf("%s",std[i].name);
        printf("Enter marks in computer:");
        scanf("%f",&std[i].comp);
    }
    //marks obtained <
    system("cls");
    printf("    Student who failed the exam\n");
    printf("Roll no\t        Name\tMarks in Comp\n");
    for(i=0;i<n;i++)
    {
        if(std[i].comp<40)
        {
            printf("%7d\t%12s\t%13.2f",std[i].roll,std[i].name,std[i].comp);
            printf("\n");
        }
    }
    printf("_______________________________________\n\n");
    //marks obtained x>70
    printf("Student who obtained the marks above 79\n");
    printf("Roll no\t        Name\tMarks in Comp\n");
    for(i=0;i<n;i++)
    {
        if(std[i].comp>79)
        {
            printf("%7d\t%12s\t%13.2f",std[i].roll,std[i].name,std[i].comp);
            printf("\n");
        }
    }
    printf("_______________________________________\n\n");
    //avg class marks
    for(i=0;i<n;i++)
    {
        sum+=std[i].comp;
    }
    avg=(sum/n);
    printf("The average marks of a class is:%.2f",avg);
    getch();
}
