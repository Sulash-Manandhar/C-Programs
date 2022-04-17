//WAP to reverse a number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rev=0,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("Reverse of %d is:%d",num,rev);
	getch();
}
