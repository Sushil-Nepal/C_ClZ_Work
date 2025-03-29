#include<stdio.h>
#include<conio.h>
void *swap(int*a,int*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a=90,b=50;
	printf("Before swap value:a=%d&b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swap value:a=%d&b=%d",a,b);
	return 0;
}
