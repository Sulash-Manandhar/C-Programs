#include<stdio.h>
#include<conio.h>
void triangle(int);
void main()
{
    int n,n1,i;
    printf("Enter number of times u want to print:");
    scanf("%d",&n);
    printf("Enter number of line u want to print:");
    scanf("%d",&n1);
    for(i=1;i<=n;i++)
    {
        triangle(n1);
    }
    getch();
}
void triangle(int n1)
{
    int i,j;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",i);
        }
        printf("\n");
    }
}


/*void triangle(int n1)
{
    int i,j;
    for(i=n1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",i);
        }
        printf("\n");
    }
}
*/
