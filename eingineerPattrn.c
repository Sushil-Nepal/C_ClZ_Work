#include<stdio.h>
#include<string.h>
void main(){
	char name[]="Eingineer";
	int len,i,j;
	len=strlen(name);
	for(i=len;i>0;i--){
		for(j=0;j<i;j++){
			printf("%c",name[j]);
		}
		printf("\n");
	}
}
