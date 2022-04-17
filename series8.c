//WAP to display -25,-20,-15,-10,-5,0,5,10,15 upto 25th term
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=-25;
	for(i=1;i<=25;i++)
	{
		printf("%d\t",n);
		n=n+5;
	}
	getch();
}
