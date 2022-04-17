//WAP to add diagonal of square matrix(left side[\])
#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
	int i,j,r,c,a[MAX][MAX],sum=0;
	printf("Enter order of square matrix: ");
	scanf("%d%d",&r,&c);
	if(r!=c)
	{
		printf("Matrix u have entered is not a square matrix.");
	}
	else
	{
		//Read element of square matrix
	printf("Enter %d*%d matrix:\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("For [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//code for left side diagonal of a square matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i-j==0)
			{
				sum+=a[i][j];
			}
		}
 	}
 	
 	printf("Sum of diagonal of a square matrix:%d",sum);
	}
	getch();
}
