/*WAP to read a four digit number and find its reverse*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,cn,u,t,h,th,rev;
	printf("Enter a four digit number: ");
	scanf("%d",&n);
	cn=n;
	u=cn%10;
	cn=cn/10;
	t=cn%10;
	cn=cn/10;
	h=cn%10;
	cn=cn/10;
	th=cn%10;
	cn=cn/10;
	rev=u*1000+t*100+h*10+th;
	printf("%d reverse = %d",n,rev);
	getch();
	
}
