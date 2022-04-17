#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num[20],temp;
    printf("Enter 20 positive integer:");
    for(i=0;i<20;i++)
    {
        printf("\nFor %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<20-1;i++)
    {
        for(j=i+1;j<20;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("The number after arrangement:\n");
    for(i=0;i<20;i++)
    {
        printf("%d\t",num[i]);
    }
    getch();
}
