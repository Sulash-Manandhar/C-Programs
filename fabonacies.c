//fabonacies series upto 10th term
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,b=1,c=0;
	for(i=1;i<=15;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d\t",c);
	}
	getch();


}
