/*WAP to find area of a traingle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,s,A;
	printf("Enter the three sides of a traingle: ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of traingle:%f",A);
	getch();
	
	
}
