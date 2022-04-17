#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,b;
	char a[10];
	printf("Enter your name: ");
	gets(a);
	for(i=1;i<10;i++)
	{
		printf("%d ",i);
		printf("Your name is %s.\n",a);
	}
	return 0;
}
