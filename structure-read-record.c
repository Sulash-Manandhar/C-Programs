//WAP to read record of N number of student
#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char fname[12];
    char lname[14];
    float comp;
    float math;
};
void main()
{

    struct student st[10];
    int n,i;
    printf("Enter no of student:");
    scanf("%d",&n);
    printf("Enter %d no of std info:\n",n);
    for(i=0;i<n;i++)
    {
        printf("For %d:\n",i+1);
        printf("Enter roll:");
        scanf("%d",&st[i].roll);
        printf("Enter first name:");
        scanf("%s",st[i].fname);
        printf("Enter last name:");
        scanf("%s",st[i].lname);
        printf("Enter marks in computer:");
        scanf("%f",&st[i].comp);
        printf("Enter marks in math:");
        scanf("%f",&st[i].math);
    }
    printf("Roll No.\t  First Name\t    Last name\tMarks in Comp\tMarks in math\n");
    for(i=0;i<n;i++)
    {
        printf("%8d\t%12s\t%13s\t%13.2f\t%12.2f",st[i].roll,st[i].fname,st[i].lname,st[i].comp,st[i].math);
        printf("\n");
    }
}
