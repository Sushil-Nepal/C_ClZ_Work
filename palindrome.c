//palindrome
#include<stdio.h>
int main(){
	int num,copy,reverse=0,rem;
	printf("Enter a Number:");
		scanf("%d",&num);
	copy=num;
	do{
 		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;	
	}while(num!=0);
	if(copy=reverse){
		printf("%d is palindrome",copy);
	}else{
		printf("%d is not palindrome",copy);
	}
	return 0;
}
