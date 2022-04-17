/*WAP to compute commission of a sale's man according to given format.
S<10000---------1
10000<=S<20000--3
20000<=S<30000--5
30000<=S--------7.5
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int s,c,A;
	printf("Enter your salary: ");
	scanf("%d",&s);
	if(s<10000)
	{
		c=1;
	}
	else if(10000<=s && s<20000)
	{
		c=3;
	}
	else if(20000<=s && s<30000)
	{
		c=5;
	}
	else //if(30000<=s)
	{
		c=7.5;
	}
	A=s*c/100;
	printf("Your commission on Rs %d is:%d",s,A);
	
	
}

