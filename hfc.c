//HCF of any two number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,hcf;
	printf("Enter any two number: ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i ==0)
		{
			hcf=i;
		}
	}
	printf("HFC of %d and %d is:%d",a,b,hcf);
	getch();
}
