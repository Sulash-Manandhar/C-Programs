//calculate SI
#include<stdio.h>
#include<conio.h>
float simple(float,float,float);
void main()
{
float p,t,r,res;
printf("Enter Principle, Time and rate: ");
scanf("%f%f%f",&p,&t,&r);
res=simple(p,t,r);
printf("SI=%g",res);
getch();;
}
float simple(float p,float t,float r)
{
float sum;
sum=(p*t*r)/100;
return(sum);
}


