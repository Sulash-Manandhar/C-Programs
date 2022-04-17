// armstrong 153=(1^3+5^3+3^3)
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,n,r,p,sum=0;
	printf("Enter a number:");
	scanf("%d",&a);
	n=a;
	while(n>0)
	{
		r=n%10;
		p=pow(r,3);
		sum=sum+p;
		n=n/10;
	}
	if(sum==a)
	{
		printf("It is a armstrong");
	}
	else
	{
		printf("It is not a armstrong");
	}
	getch();
	
	
}
