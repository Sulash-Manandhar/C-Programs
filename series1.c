//WAP to display 0.1, 0.01, 0.001, 0.0001,....9th term
#include<stdio.h>
#include<conio.h>
void main()
{
	float i,p;
	p=0.1;
	for(i=1;i<=9;i++)
	{
		printf("\n%g",p);
		p=p/10;
	}
}
