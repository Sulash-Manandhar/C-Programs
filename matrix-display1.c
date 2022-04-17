#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
	int i,j,c,r,a[MAX][MAX],b[MAX][MAX];
	printf("Enter the order of matrix:");
	scanf("%d%d",&r,&c);
	printf("Enter the element of %d*%d matrix:\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix you entered is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}

getch();
}
