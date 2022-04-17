#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	//printf("Required format:\n ");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		
		for(k=i;k<=5;k++)
		{
			printf("%d",k);
		}
			printf("\n");
	}
}
