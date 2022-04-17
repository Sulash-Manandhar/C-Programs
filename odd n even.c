#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n%2;
	if(a==0)
	{
		printf("%d is a even number.",n);
	}
	else 
	{
		printf("%d is a odd number.",n );
	}
	getch();
	
}
