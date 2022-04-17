//sum of square of first n natural number
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,s,sum=0;
	printf("Enter number of term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=pow(i,2);
		sum=sum+s;
	}
	printf("Sum=%d",sum);
	getch();
}
