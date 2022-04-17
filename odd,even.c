/*WAP to find weather a number is oddor even*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,C;
	printf("Enter any number: ");
	scanf("%d",&a);
	C=a%2;
	C==0?printf("%d is a even number.",a):printf("%d is a odd number",a);
	getch();
	
}
