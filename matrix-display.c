//read a matrix from a user and display it.
#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
	int i,j,r,c,a[MAX][MAX],q=15;
	printf("Enter order of matrix(r%cc): ",q);
	scanf("%d%d",&r,&c);
	printf("Enter %d%c%d matrix:\n",r,q,c);
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
}
