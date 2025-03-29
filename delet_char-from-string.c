#include<stdio.h>
delStr(char str[],int i){
	strcpy(&str[i-1],&str[i]);
}
void main(){
	char string[80];
	int index;
	printf("Enter a string:");
	gets(string);
	printf("Enter a character possition to delete:");
	scanf("%d",&index);
	delStr(string,index);
	printf("The string after a deletion is:");
	puts(string);
	
}
