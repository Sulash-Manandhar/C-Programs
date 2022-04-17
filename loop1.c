//WAP to display 1-100 that is divisible by 3.
//WAP to display contine loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{	
		if(i==3)
		{
			continue;
			printf("%d",i);	
		}
		printf("FINISHED LOOP\n");
		getch();
	 	
	}
	
}
