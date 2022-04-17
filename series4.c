//WAP to display number from 1-100 and count the number divisible by 3.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p;
	for(i=1;i<=100;i++)
	{
		printf("%d\t",i);
		if(i%3==0)
		{
			p++;
		}
	}
	printf("\nNo of number that is divisible by 3 is: %d",p);
	getch();
}
