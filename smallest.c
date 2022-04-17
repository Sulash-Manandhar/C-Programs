//WAP to find smallest among 2 number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter any two number: ");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("%d is the samllest.",a);
	}
	else
	{
		printf("%d is the smallest.",b);
	}
	getch();
}
