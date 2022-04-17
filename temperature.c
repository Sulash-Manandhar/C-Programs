/*WAP to convert celsius into fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	printf("Enter a temperature in Celsius: ");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("%2.f temperature in fahrenheit is %2.f.",c,f);
	getch();
}

