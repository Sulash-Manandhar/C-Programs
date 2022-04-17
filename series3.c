//WAP to display even number and their sum from 1-100
#include<stdio.h>
#include<conio.h>
void main()
{
	int s=0,t=1,n=1;
	for(t=1;t<=100;t++)
	{
		printf("%d\t",n);
		s+=n;
		n+=2;
	}
	printf("Sum=%d",s);
}
