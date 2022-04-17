/*Use of formatted I/O function*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1234,b=78,c;
	float x=22.017;
	char city[]="Patan";
	printf("Enter a number less than 10000: ");
	scanf("%4d",&c);
	printf("a=%8d and c=%6d",a,c);
	printf("\nb=%-8d x=%10.4f",b,x);
	printf("\n%10.1s",city);
	printf("\n%10.2s",city);
	printf("\n%10.3s",city);
	printf("\n%10.4s",city);
	printf("\n%10.5s",city);
	
}

