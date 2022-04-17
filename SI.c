/*WAP to calculate simple interest and amount*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float SI,R,T,P,A;
	printf("Enter principle, rate, time: ");
	scanf("%f%f%f",&P,&R,&T);
	SI=(P*T*R)/100;
	A=SI+P;
	printf("Simple interest=%2.f\nAmount=%2.f",SI,A);
	return 0;
	
}
