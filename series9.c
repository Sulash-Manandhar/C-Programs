//WAP to display 1,1,2,3,4,5,8,13,21,24,34 upto 20th term
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=1,b=1,c;
	for(i=1;i<=20;i++)
	{	
		a=b;
		b=c;
		c=a+b;
		printf("%d\t",c);
		
	}
	getch();
}
