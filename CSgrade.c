//WAP to read marks of a student in CS and find its grade.
#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	printf("Enter your marks in computer science: ");
	scanf("%d",&m);
	if(m>100 || m<0)
	{
		printf("You have entered invalid marks.");
	}
	else
	{
		printf("You have achieved ");
		if(m>90)
		{
			printf("A+");
		}
		else if(m>480)
		{
			printf("A");
		}
		else if(m>70)
		{
			printf("B+");
		}
		else if(m>60)
		{
			printf("B");
		}
		else if(m>50)
		{
			printf("C+");
		}
		else if(m>=40)
		{
			printf("C");
		}
		else
		{
			printf("D+(fail)");
		}
	}
}

