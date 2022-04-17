/*WAP to read a small letter and display its capital letter.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char a,c;
	printf("Enter lowercase character: ");
	a=getchar();
	c=a-32;
	printf("Equivalent uppercase character is: ");
	putch(c);
	getch();
}
