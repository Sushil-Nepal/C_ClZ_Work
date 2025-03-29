//for perfect number: sum of factorial(except that number) of number is equal to that number.
#include<stdio.h>
void main(){
	int num,i,sum=0;
	printf("Enter a Number:");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("%d is Perfect Number.",num);
	}else{
		printf("%d is not a perfect Number",num);
	}
}
