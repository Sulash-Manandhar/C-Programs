//1,2,4,7,11
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p=1;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",p);
		p=p+i;
	}
	getch();
}
