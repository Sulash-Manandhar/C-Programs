//WAP to read roll no,name,marks in c of n student and arrange ascending  of marks
#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char fname[10];
    float comp;
};
void main()
{
    struct student std[10];
    struct student temp;
    int n=0,i,j;
    char ans;
    printf("Enter no of student:");
    scanf("%d",&n);
    printf("Enter %d no of std info:\n",n);
    for(i=0;i<n;i++)
    {
    system("cls");
    printf("For std %d:\n",i+1);
    printf("Enter roll.no:");
    scanf("%d",&std[i].roll);
    printf("Enter first name:");
    scanf("%s",std[i].fname);
    printf("Enter marks in computer:");
    scanf("%f",&std[i].comp);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(std[i].comp>std[j].comp)
            {
                temp=std[i];
                std[i]=std[j];
                std[j]=temp;
            }
        }
    }
    printf("Detail info of std after arranging:\n");
    printf("Roll No.\t  First Name\tMarks in Comp\n");
    for(i=0;i<n;i++)
    {
       printf("%8d\t%12s\t%13.2f\n",std[i].roll,std[i].fname,std[i].comp);
    }
    getch();
}
