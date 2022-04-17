//WAP to display first 100 odd value with their sum.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s;
	s=0;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
			s=s+i;
		}
		
	}
	printf("\nSum of odd number from 1-100 is:%d",s);
}
