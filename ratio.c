/*WAP to find the ratio of male and female student in a class*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m,f;
	float r;
	printf("Enter the number of male student and female student in a class: ");
	scanf("%d%d",&m,&f);
	r=(float)m/f;
	printf("The ratio of male and femlae student in a class:%f",r);
	getch();
	
}
