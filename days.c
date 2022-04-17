#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	printf("Enter any number of a week: ");
	scanf("%d",&ch);
	if(ch>7)
	{
		printf("BAKA!!.There are only 7 days in a week.");
	}
	else
	{
			printf("%d is: ",ch);
		switch(ch)
	{
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			break;
	}
	}

	
}
