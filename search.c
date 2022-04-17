//search a number from list {17,29,3,11,16,50,35,60,90,95,99}
#include<stdio.h>
#include<Conio.h>
#define MAX 0
void main()
{
	int n,i;
	int a[11]={17,29,3,11,16,50,35,60,90,95,99};
	printf("List:17 29 3 11 16 50 35 60 90 95 99\n");
	printf("Enter a number u want to search from above list: ");
	scanf("%d",&n);
	for(i=0;i<11;i++)
	{
		if(n==a[i])
		{
			printf("U searched for number %d.",a[i]);
		}
	}
	getch();
}
