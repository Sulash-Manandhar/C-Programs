#include<stdio.h>
#include<conio.h>
int small(int,int,int);
void main()
{
    int a,b,c,res;
    printf("Enter three no: ");
    scanf("%d%d%d",&a,&b,&c);
    res=small(a,b,c);
    printf("%d is smallest among all.",res);
    getch();
}
int small(int a,int b,int c)
{
    int s;
    if(a<b && a<c)
        s=a;
    else if(b<a && b<c)
        s=b;
    else
        s=c;
    return(s);
}
