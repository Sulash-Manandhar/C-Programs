/*WAP to display sum,difference,quotient,remainder and product of any two number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,S,D,Q,M,R;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	S=a+b;
	D=a-b;
	Q=a/b;
	M=a*b;
	R=a%b;
	printf("Sum=%d\nDifference=%d\nDivision=%2.d\nMultiplication=%2.d\nRemainder=%d",S,D,Q,M,R);
    return 0;
}
