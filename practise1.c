#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    printf("The required format is:\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    printf("\n");
    printf("Next format:\n");
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    printf("\n");
    printf("Next format:\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }

    printf("\n");
    printf("Next format:\n");
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("Next format:\n");
             5
            45
           345
          2345
         12345
   /* for(i=1;i<=5;i++)
    {
        for(j=i;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=5;k++);
        {
            printf("%d",k);
        }
        printf("\n");
    }*/
    getch();
}
