#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
	int num[5],nt[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	FILE *fptr;
	fptr=fopen("numt.txt","w+b");
	if(fptr!=NULL){
		fwrite(num,sizeof(int),5,fptr);
		rewind(fptr);
		fread(nt,sizeof(int),5,fptr);
		for(i=0;i<5;i++){
		printf("%d",nt[i]);
		}
	}
	getch();
}
