/*WAP to read three digit number and find its sum*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,u,t,h,cn,S;
	printf("Enter any three digit number: ");
	scanf("%d",&n);
	cn=n;
	u=cn%10;
	cn=cn/10;
	h=cn%10;
	cn=cn/10;
	t=cn%10;
	cn=cn/10;
	S=u+t+h;
	printf("The sum of %d = %d",n,S);
	getch();
	

}
