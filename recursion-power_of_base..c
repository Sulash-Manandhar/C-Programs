#include<stdio.h>
#include<conio.h>
float power(float,int);
void main()
{

    int p;
    float b,res;
    printf("Enter base: ");
    scanf("%f",&b);
    printf("Enter power of base: ");
    scanf("%d",&p);
    res=power(b,p);
    printf("%.g raised to the power %d is:%g",b,p,res);
    getch();
}
float power(float b,int p)
{
    if(p==0)
        return(1);
    else if(p>0)
        return(b*power(b,p-1));
    else
        return(power(p+1,b));
}

