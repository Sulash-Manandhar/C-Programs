//read two matrix and find its product
#include<stdio.h>
#define FILL 5
void main()
{
	int i,j,k,r,c,r1,c1,a[FILL][FILL],b[FILL][FILL],p[FILL][FILL];
	//read order of matrix
	printf("Enter order of matrix A(r*c):");
	scanf("%d%d",&r,&c);
	printf("Enter order of matrix B(r*c):");
	scanf("%d%d",&r1,&c1);
	//if condition
	if(c!=r1)
	{
		printf("Multiplication is not possible.");
	}
	else
	{
		//Read matrix A element
		printf("Enter the element of matrix A(%d*%d):\n",r,c);
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		    {
				scanf("%d",&a[i][j]);
	     	}
	    }
	    //Read matrix B element
	    printf("Enter the element of matrix B(%d*%d):\n",r1,c1);
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		    {
				scanf("%d",&b[i][j]);
	     	}
	    }
	    //product
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		p[i][j]=0;
	    		for(k=0;k<c;k++)
	    		{
	    			p[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		//printf
		printf("Product of matrix A and B:\n");
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		    {
		    	printf("%4d",p[i][j]);
	     	}
	     	printf("\n");
	    }
	}
}
