/*WAP to display if a number is divisible by 7 or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("%d is divisible by 7.",n);
	}
	else
	{
		printf("%d is not divisible by 7.",n);
	}
	getch();
}
