/*WAP*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char city[]="Patan",a[8];
	int i;
	printf("Enter your name: ");
	scanf("%s",a);
	for(i=1;i<6;i++)
	{
		printf("%-5.*s\n",i,city);
	}
	
	printf("Your name:%s",a);
	
	return 0;
}
