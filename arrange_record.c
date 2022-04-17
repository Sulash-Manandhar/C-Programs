#include<stdio.h>
#include<conio.h>
struct employee
{
   int eid;
   char name;
   float sal;
};
void main()
{
   struct employee em[10];
   int i,j;
   char ans;
   FILE *f1;
   f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\arrange.txt","w");
   printf("Enter the detail of employee:\n");
   do
   {
      i=0;
      printf("Enter employee id,name and salary:\n");
      scanf("%d%s%f",&em[i].eid,em[i].name,&em[i].sal);
     // fprintf(f1,"%d\t%s\t%g\t",em[i].eid,em[i].name,em[i].sal);
      i++;
      fflush(stdin);
      printf("Do u want to add another record:\n");
      ans=getchar();
   }while(ans=='Y' || ans=='y');
   fclose(f1);
   getch();
}
