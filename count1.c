//Read 100 employee salary and count no of employee receiving the salary(30000-50000)
#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
	int i,a[MAX],sum=0;
	printf("Enter 10 Employee salary: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>=30000 && a[i]<=50000)
		{
			sum=sum + 1;
	    }
	}
	printf("Number of employee having salary range(30000-50000): %d",sum);
	getch();
}
