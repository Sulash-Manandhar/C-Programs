/*WAP to read a name and paragraphand display it.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20],para[1000];
	printf("Enter your name: ");
	scanf("%[^\n]",name);
	printf("Enter a paragraph and press $ to end: ");
	scanf("%[^$]",para);
	printf("Your name is: %s",name);
	printf("\nYour paragraph is: %s",para);
	getch();
	
}
