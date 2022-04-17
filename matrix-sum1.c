//read two input from user and display its sum
#include<stdio.h>
#include<conio.h>
#define MA 5
void main()
{
	int i,j,r1,c1,r2,c2,a[MA][MA],b[MA][MA],c[MA][MA];
	//order of matrix A
	printf("Enter the order of matrix A(r*c):\n");
	scanf("%d%d",&r1,&c1);
	//order of matrix B
	printf("Enter the order of matrix B(r*c):\n");
	scanf("%d%d",&r2,&c2);
	
	if(r1!=r2 || c1!=c2)
	{
		printf("Matrix addition is not possible.");
	}
	else
	{
		//Read matrix A element
		printf("Enter the element of matrix A(%d*%d):\n",r1,c1);
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		    {
				scanf("%d",&a[i][j]);
	     	}
	    }
	    //Read matrix B element
	    printf("Enter the element of matrix B(%d*%d):\n",r2,c2);
		for(i=0;i<r2;i++)
	    {
		   for(j=0;j<c2;j++)
		    {
				scanf("%d",&b[i][j]);
	     	}
	    }
	    //Sum
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		    {
		    	c[i][j]=a[i][j]+b[i][j];
	     	}
	    }
	//print sum
	printf("Sum of matrix A and B:\n");
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		    {
		    	printf("%4d",c[i][j]);
	     	}
	     	printf("\n");
	    }
	}
   getch();
}
