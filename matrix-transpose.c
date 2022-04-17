//transpose of matrix
#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
	int i,j,r,c,a[MAX][MAX],b[MAX][MAX];
	//read matrix
	printf("Enter order of matrix: ");
	scanf("%d%d",&r,&c);
	printf("Enter %d*%d matrix:\n",r,c);
	for(i=0;i<r;i++)
    {
	    for(j=0;j<c;j++)
	    {
  			scanf("%d",&a[i][j]);
    	}	
    }
    //transpose
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		b[j][i]=a[i][j];
		}
	}
	//print
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	getch();
}
