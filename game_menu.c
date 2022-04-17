/*WAP to dispaly following program:
1.Play
2.Setting
3.Player option
4.Exit
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int ch;
	printf("\tMenu\n-----------------\n");
	printf("1.Play\n2.Setting\n3.Player option\n4.Exit");
	printf("\n-----------------");
	printf("\nPlease enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("The game is going to start in 3 sec.");
			break;
		case 2:
			printf("Setting menu is now loading.");
			break;
		case 3:
			printf("Player option menu is now loading.");
			break;
		case 4:
			printf("Game is going to be closed.Press any key to exit.");
			getch();
			exit(0);
		default:
			printf("Please enter valid option.");
			break;
	}
	getch();
	
	
	
}


