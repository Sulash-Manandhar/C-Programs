#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5
/*
void main()
//2073 SET-C
//find smallest number among all
{
   int i,j,num[5],small=0;
   printf("Enter any five number:");
   for(i=0;i<5;i++)
   {
      printf("Enter %d:",i+1);
      scanf("%d",&num[i]);
   }
   small=num[0];
   for(i=0;i<5;i++)
   {
         if(small>num[i])
            small=num[i];
   }
   printf("Smallest among all:%d",small);
   getch();
}
*/

/*
//2074 SET A
int sum(int);
void main()
{
   int n,res;
   printf("Enter number of terms:");
   scanf("%d",&n);
   res=sum(n);
   printf("Sum of n natural number:%d",res);
   getch();
}

int sum(int n)
{
   int i,ans=0;
   for(i=1;i<=n;i++)
   {
      ans+=i;
   }
   return(ans);
}
*/

/*
//2074 SET B
struct student
{
   char fname[15];
   int age;
   float sal;
};
void main()
{
   struct student st[3];
   int i;
   printf("Enter the given information about:\n");
   for(i=0;i<3;i++)
   {
      printf("For std %d:\n",i+1);
      printf("Enter your name:");
      scanf("%s",st[i].fname);
      printf("\nEnter your age:");
      scanf("%d",&st[i].age);
      printf("Enter your salary:");
      scanf("%f",&st[i].sal);
      system("cls");
   }
   printf("Name of employee \tAge\tSalary\n");
   for(i=0;i<3;i++)
   {
      printf("%15s\t%3d\t%5f\n",st[i].fname,st[i].age,st[i].sal);
   }
   getch();

}
*/



////2071 SET C
void main()
{
   int i,j,num[10],temp;
   printf("Enter any ten numbers:");
   for(i=0;i<10;i++)
   {
      scanf("%d",&num[i]);
   }
   for(i=0;i<10-1;i++)
   {
      for(j=i+1;j<10;j++)
      {
         if(num[i]>num[j])
         {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }
   }
   printf("Ascending order:\n");
   for(i=0;i<10;i++)
   {
      printf("%d\n",num[i]);
   }
   getch();

}
