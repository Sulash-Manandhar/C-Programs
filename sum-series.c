//sum of the series:1,5,9....upto 10th terms
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,t=1,sum=0;
	printf("Series:\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\t",t);
		t=t+4;
		sum=sum+t;
	}
	printf("\nSum of the series:%d",sum);
}
