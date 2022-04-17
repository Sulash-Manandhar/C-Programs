/*WAP to check wheather a number is alphabet or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,cha;
	printf("Note:");
	printf("\nFalse = 0, True = 1/2");
	printf("\nEnter a character: ");
	ch = getchar();
	printf("%c is a letter?:%d",ch,isalpha(ch));
	getch();
	
}
