//greatest common divisor
#include<stdio.h>
#include<conio.h>
int common(int);
void main()
{
 int n,gcd;
 printf("Enter a number: ");
 scanf("%d",&n);
 gcd=common(n);
 printf("%d greatest common divisor is:%d",n,gcd);
 getch();
}

int common(int n)
{
    int i,g=1;
    for(i=1;i<n;i++)
    {
    if(n%i==0)
    {
     g=i;
    }
    }
    return(g);
}
