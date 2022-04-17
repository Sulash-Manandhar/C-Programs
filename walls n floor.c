/*WAP to calculate area of floor,volume of room and area of four walls*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,h,A,F,V;
	printf("Enter length,breath and height of four walls: ");
	scanf("%f%f%f",&l,&b,&h);
	F=l*b;
	A=2*h*(l+b);
	V=l*b*h;
	printf("The area of floor= %g",F);
	printf("\nThe volumeof room= %g",V);
	printf("\nThe area of four walls= %g",A);
	getch();
}
