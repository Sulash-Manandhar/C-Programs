//display odd number 1-100 using continue jumping statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("Odd number between 1-100:\n ");
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		
			continue;
			printf("%d\t",i);
		
	}
	getch();
	
}
