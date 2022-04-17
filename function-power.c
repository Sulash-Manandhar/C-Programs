//find number acc to power
#include<stdio.h>
#include<conio.h>
#include<math.h>
float power(float,int);
void man()
{
    int b,p,pow;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter power: ");
    scanf("%d",&p);
    pow=power(b,p);
    printf("Resulted number:%d",pow);
    getch();
}

float power(float b,int p)
{
    int i,r=1;
    if(b>0)
    {
        for(i=1;i<=p;i++)
        {
            r=r*b;
        }
    }
    else
    {

        for(i=1;i<=-p;i++)
        {
            r=r/b;
        }
    }
    return(r);
}
