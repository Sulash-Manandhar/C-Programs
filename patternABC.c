/*
 			  A
              B  B
              C  C  C
              D  D  D  D
              E  E  E  E  E

*/
#include<stdio.h>
void main(){
	int i,j,num=65;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c\t",num);
		}
		printf("\n");
		num++;
	}
}
