#include<stdio.h>
void main(){
	int year;
	printf("Enter a Year:");
	scanf("%d",&year);
	if(year%400==0){
		printf("Year Is leap Year.");
	}else if(year%4==0&&year%100!=0){
		printf("Year Is leap Year.");
	}else{
		printf("Year Is not a leap Year.");
	}
}
