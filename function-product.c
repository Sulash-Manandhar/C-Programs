#include<stdio.h>
#include<conio.h>
float product(float,float);
void main()
{
    float a,b,p;
    printf("Enter two number: ");
    scanf("%f%f",&a,&b);
    p=product(a,b);
    printf("The product of %g and %g is:%g",a,b,p);
    getch();
}

float product(float a,float b)
{
    float p;
    p=a*b;
    return(p);

}
