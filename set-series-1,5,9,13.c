#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n=1;
    printf("The series are as follow:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\t",n);
        n+=4;
    }
    getch();
}
