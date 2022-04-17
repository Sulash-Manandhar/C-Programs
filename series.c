//display 1,12,123,1234....
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p;
	p=1;
	for(i=2;i<=10;i++)
	{
		printf("\n%d",p);
		p=p*10;
		p=p+i;		
	}
}
