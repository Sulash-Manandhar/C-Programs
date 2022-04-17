//multiplication of "n"
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	printf("Enter desire number: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\t*\t%d\t=\t%d",n,i,i*n);
		printf("\n");
	}
	getch();
}
