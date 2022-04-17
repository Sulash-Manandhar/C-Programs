//factorial number 5=5*4*3*2*1
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial of %d is:%d",n,f);
}
