/*WAP to chaeck wheather the sum is greater or not .*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s;
	printf("Note:");
	printf("\nFalse = 0, True = 1");
	printf("\nEnter first number: ");
	scanf("%d",&a);
	printf("Enter a second number: ");
	scanf("%d",&b);
	s=a+b;
	printf("\n%d>%d?%d",a,b,a>b);
	printf("\n%d>%d?%d",s,a,s>a);
	printf("\n%d>%d?%d",s,b,s>b);
	getch();
	
}
