/*WAP to find area and perimeter of rectangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,A,P;
	printf("Enter length and breath of rectangular: ");
	scanf("%f%f",&l,&b);
	A=l*b;
	P=2*(l+b);
	printf("Area of rectangle=%f \nPerimeter of rectangle=%f",A,P);
	getch();
	
	
}
