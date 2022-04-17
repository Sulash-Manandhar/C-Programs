/*WAP to find greatest number among four number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,F,S,T;
	printf("Enter any four number: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	F=a>b?a:b;
	S=F>c?F:c;
	T=S>d?S:d;
	printf("%d is the greatest number among all.",T);
	getch();
	
}
