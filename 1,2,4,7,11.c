//WAP to display 1,2,4,7,11,16,22,29,37..... upto 25th term.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=1;
	for(i=1;i<=25;i++)
	{
		printf("%d\t",s);
		s=s+i;
	}
	getch();
	
}
