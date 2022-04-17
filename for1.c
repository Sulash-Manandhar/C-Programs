/*WAP to use for statement*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char pig[]="Kathmandu",city[]="Patan";
	int p,i;
	for(p=1;p<10;p++)
	{
    	printf("\n%10.*s",p,pig);
    }

	for(i=1;i<6;i++)
	{
		printf("\n%-6.*s",i,city);
	}
	return 0;
	
}
