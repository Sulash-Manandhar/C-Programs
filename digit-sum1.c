//WAP to sum digit of a number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,j;
	printf("Enter a number: ");
	scanf("%d",&n);
	j=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digit %d is:%d",j,sum);
}
