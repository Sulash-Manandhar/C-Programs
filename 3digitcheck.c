//WAP to check  wheather a number is three digit or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n>100 && n<1000)
	{
		printf("%d is a three digit number.",n);
	}
	else
	{
		printf("%d is not a three digit number.",n);
	}
	getch();
}
