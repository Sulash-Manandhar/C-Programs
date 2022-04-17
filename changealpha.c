/*
Write a program that copies the content of one file to another. While
copying you have to change every alphabet character read in to the
character next to the alphabet. For example A will change into B, B
into C and so on. When you get to Z wrap around and change it to
A. It should work for both small and capital letters. Conversion
should be done for only alphabets.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	FILE *f1,*f2;
	char ch;
	f1=fopen("D:\\Suyash\\Suyash\\Files\\Herald CLZ\\Level 5-semester3\\5CS021 - Numerical Methods and Concurrency\\Week 7\\txt file\\ABC.txt","r");
	f2=fopen("D:\\Suyash\\Suyash\\Files\\Herald CLZ\\Level 5-semester3\\5CS021 - Numerical Methods and Concurrency\\Week 7\\txt file\\copied.txt","w");
	if(f1==NULL){
		printf("File 1 not found");
	}
	
	if(f2==NULL){
		printf("File 2 not made");
	}
	while((ch=fgetc(f1))!=EOF){
		if(ch>=97 && ch<=122){
			ch=ch-32;
			printf("%c",ch);
			if(ch=='A'){
				fputc('B',f2);
			}
			else if(ch='B'){
				fputc('C',f2);
			}
			else if(ch=='C'){
				fputc('Z',f2);
			}
			else if(ch=='Z'){
				fputc('A',f2);
			}
			else{
				fputc(ch,f2);
			}
		}
		else{
			fputc(ch,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	
}
