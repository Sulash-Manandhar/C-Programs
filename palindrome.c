//WAP to check wheather a number is palindrome or not(121=121)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int num,n,rev=0,r=0;
	system("cls");
	printf("Enter a number:");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
		if(num==rev)
	{
		printf("%d is a palindrome.",num);
	}
	else
	{
		printf("%d is not a palindrome.",num);
	}
	
	getch();
	
}
