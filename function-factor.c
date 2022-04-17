#include<stdio.h>
#include<conio.h>
int factor(int);
void main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=factor(n);
    printf("%d factor is:%d",n,f);
}

int factor(int k)
{

    int i,f=1;
    for(i=1;i<=k;i++)
    {
        f=f*i;
    }
    return(f);
}
