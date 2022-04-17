//practice .*s
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[]="Kathmandu";
	int i,j;
	printf("%s\n",a);
	printf("%20s\t",a);
	printf("%-20s\n",a);
	for(i=1;i<=9;i++)
	{
		printf("%20.*s\n",i,a);
	}
	
	for(j=8;j>=0;j--)
	{
		printf("%20.*s\n",j,a);
	}
	getch();
	
}
