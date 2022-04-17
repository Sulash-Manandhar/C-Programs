// arrange list ina ascending order
#include<stdio.h>
#include<Conio.h>
#define MAX 10
void main()
{
	int n,i,j,a[MAX],temp;
	printf("How many number u want to list: ");
	scanf("%d",&n);
	printf("Enter %d number: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	
}

