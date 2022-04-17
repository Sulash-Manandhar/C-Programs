#include<stdio.h>
void main()
{
    FILE *fp;
    char cname[]="My collage name is NCCS.";
    fp=fopen("mycollagename.txt","w");
    if(fp==NULL)
    {
        printf("Error!!");
        getch();
    }
    else
    {
        fputs(cname,fp);
        printf("File made successfully");
        fclose(fp);
      
    }
}
