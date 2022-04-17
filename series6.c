//WAP to display the number that are divisible by 2 and 3 from 1-100
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0 && i%3==0)
		{
			printf("%d\t",i);
			s++;
		}
		
	}
	printf("\nNo of number that are divisible by 2 & 3 are: %d",s);
}
