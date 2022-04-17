#include<stdio.h>
#include<conio.h>
void main()
{
    int a,*p;
    p=&a;
    printf("a=%d\n",a);
    printf("Value of a,using pointer=%d\n",*p);
    printf("Address of a:%u\n",&a);
    printf("Address of a using pointer:%u\n",p);
    *p=*p * 2;
    printf("After multiplication a=%d\n",a);
    getch();

}
