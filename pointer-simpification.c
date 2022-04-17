#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*p,*q;
    a=10;
    b=4;
    p=&a;
    q=&b;
    printf("Adding a and b using pointer:%d\n",*p+*q);
    printf("Multiplying a and b using pointer:%d\n",*p * *q);
    printf("Subtracting a and b using pointer:%d\n", *p - *q);
    printf("Dividing a and b using pointer:%d\n",*p / *q);
    getch();
}
