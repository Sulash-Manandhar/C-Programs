//multiplication upto n
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	printf("Enter desire number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	getch();
}

