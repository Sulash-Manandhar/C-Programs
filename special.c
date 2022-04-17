//WAP to read a line of text and count no of vowel,consocent,digits,space and other character
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 80
void main()
{
	int i,j,v=0,c=0,d=0,s=0,ch=0;
	char line[80];
	printf("Enter a line: ");
	scanf("%[^\n]",line);
	strupr(line);
	for(i=0;line[i]!='\0';i++)
	{
		//alphabet
		if(line[i]>=65 && line[i]<=96)
		{
			if(line[i]=='A'|| line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
				v++;
			else
				c++;
		}
		else if(line[i]>='0' && line[i]<='9')
			d++;
		else if(line[i]==' ' || line[i]=='\t')
			s++;
		else
			ch++;
	}
		
		printf("No of vowel:%d\n",v);
		printf("No of consolent:%d\n",c);
		printf("No of space:%d\n",s);
		printf("No of digit:%d\n",d);
		printf("No of symbol or orther character:%d\n",ch);
	
}
