#include<stdio.h>
#include<conio.h>
int main()
{
	char A[8],city[]="SuAsh";
	int i,n;
	printf("Enter your name: ");
	gets(A);
	printf("Enter noof character that your name contain:");
	scanf("%d",&n);
	printf("%s",A);
	for(i=1;i<=n;i++)
	{
		printf("\n%10.*s",i,A);
	}
	return 0;
}

