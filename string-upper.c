//READ name in lowercase and convert it into uppercase
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char name[25];
	printf("Enter your name:");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]-=32;
		}
	}
	printf("Your name in uppercase:%s",name);
	getch();
}

