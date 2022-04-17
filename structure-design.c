//Design struct name std with four memb:roll,fname,add and marks inc
#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char fname[10];
    char add[14];
    float comp;
};
void main()
{
    struct student std;
    printf("Enter roll.no:");
    scanf("%d",&std.roll);
    printf("Enter first name:");
    scanf("%s",std.fname);
    fflush(stdin);
    printf("Enter address:");
    scanf("%s",std.add);
    printf("Enter marks in computer:");
    scanf("%f",&std.comp);
    //printing info
    system("cls");
    printf("Your detail info:\n");
    printf("Roll.no:%d\nFirst name:%s\nAddress:%s\nMarks in C:%g",std.roll,std.fname,std.add,std.comp);
    getch();
}
