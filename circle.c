#include<stdio.h>
#include<conio.h>
#define PI 3.14159
void main()
{
	float r,c,a;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	a=PI*r*r;
	c=2*PI*r;
	printf("Area of circle is:%f\ncircumference of circle is:%f",a,r);
	getch();
}
