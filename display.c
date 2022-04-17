/*
. Ask characters from the user until an enter key is pressed.
     Hint: The ASCII Value of Enter key is 13.  getche()

*/
#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	printf("Enter character(press enter to end):");
	do{
		ch=getchar();
		putch(ch);
		
	}while(ch!=13);
}
