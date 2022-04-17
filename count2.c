//Read marks obtained in CS by 50 std and count the no of student obtaining marks
//80<=x and also std with marks x<=40
#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
	int i,a[MAX],p=0,f=0;
	printf("Enter marks obtained in CS of 10 STD: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>=80)
		{
			p+=1;
		}
		else if(a[i]<=40)
		{
			f+=1;
		}
	}
	printf("Student with marks (80<=): %d",p);
	printf("\nNo of student with marks (<=40): %d",f);
	getch();
}

