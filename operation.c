/*WAP to display following:
ask user for any two number and operation to be performed
(+) Addition
(-) Subtraction
(*) Product
(/) Division
(%) Remainder
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,r;
	char ch;
	printf("\tMenu");
	printf("\n-------------------------\n");

	printf("(+) Addition\n(-) Subtraction\n(*) Product\n(/) Division\n(%%) Remainder");
	printf("\n-------------------------\n");
	printf("Operation that you like to perform:\n");
	scanf("%c",&ch);
	printf("Enter any two number: ");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':
			r=a+b;
			printf("Sum:%d",r);
			break;
		case '-':
				r=a-b;
			printf("Difference:%d",r);
			break;
		case '*':
			r=a*b;
			printf("Product:%d",r);
			break;
		case '/':
			r=a/b;
			printf("Division:%d",r);
			break;
		case '%':
			r=a%b;
			printf("Remainder:%d",r);
			break;
		default:
			printf("Invalid operation.");
			
	}
	
	











}
