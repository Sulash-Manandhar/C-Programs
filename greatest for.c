/*WAP to find greatest among three number using if condition*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,s;
	printf("Enter any three number: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		s=a;
	}
	else if(b>a && b>c)
	{
		s=b;
	}
	else 
	{
		s=c;
	}
	printf("%d is the greatest number.",s);
	getch();
	
}
