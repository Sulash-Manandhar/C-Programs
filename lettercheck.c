//WAP to check wheather a characater is character or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	char A;
	printf("Enter a letter: ");
	scanf("%c",&A);
	if(97<=A&&A<=123 || 65<=A&&A<=90)
	{
		printf("%c is a letter.",A);
	}
	else{
		printf("%c is not a letter.",A);
	}
	getch();
}
