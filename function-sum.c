#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
        int a,b,s;
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        s=sum(a,b);
        printf("Sum of %d and %d is:%d",a,b,s);
        getch();
}
sum(int a,int b)
{
    int s;
    s=a+b;
    return(s);
}
