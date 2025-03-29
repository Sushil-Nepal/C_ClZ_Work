//aremostrong Number
#include<stdio.h>
#include<math.h>
int main(){
	int num,rem,result=0,copy;
	printf("Enter a number:");
		scanf("%d",&num);
	copy=num;
	do{
		rem=num%10;
		result+=pow(rem,3);
		num/=10;
	}while(num!=0);
	if(result==copy){
		printf("%d is Aremonstrong Number.",copy);
	}else{
		printf("%d is Not a Aremonstronge Number.",copy);
	}
	return 0;
}