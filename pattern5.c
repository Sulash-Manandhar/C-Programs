/*
   1
  2 3
 4 5 6
7 8 9 10
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,l;
	for(i=1;i<=4;i++)
	{
		for(l=1;l<=4-i;l++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
