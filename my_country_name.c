#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *f1;
    f1=fopen("E:\\SuAsh\\Files\\file handling\\txt files\\my_country_name.txt","w");
    char cname[]="My country name is Nepal.";
    if(f1==NULL)
    {
        printf("Error in creation.");
        exit(0);
    }

        fputs(cname,f1);
        printf("SUCCESS");
       fclose(f1);
    getch();
}
