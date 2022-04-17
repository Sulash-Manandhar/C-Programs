//1,3,9,27,....upto 10th
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p=1;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",p);
		p=p*3;
	}
	getch();
}
