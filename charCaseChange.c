#include<stdio.h>
#include<conio.h>
int main(){
	char ch,altCh;
	printf("Enter a Character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90){
		altCh=ch+32;
		printf("The Lower id %c",altCh);
	}else if(ch>=97&&ch<=122){
		altCh=ch-32;
		printf("The Upper case is %c",altCh);
	}else{
		printf("Out Of Range.");
	}
	return 0;
}
