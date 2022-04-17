#include<stdio.h>
#include<conio.h>
#define MAX 20
struct student
{
    int roll;
    char name[MAX];
    char add[MAX];
    int num;
};
void main()
{
    struct student std[10];
    char ans[3];
    int i=1;
    do
    {
        system("cls");
        printf("For std %d:\n",i);
        printf("Enter roll.no:");
        scanf("%d",&std[i].roll);
        /*
        printf("Enter first name:");
        scanf("%s",std[i].name);
        printf("Enter ur address:");
        scanf("%s",std[i].add);
        */
        printf("Enter your phone no:");
        scanf("%d",&std[i].num);
        printf("Do u still want to continue:");
        gets(ans);
        //i++;
    }while(ans=='Y' || ans=='y');



}
