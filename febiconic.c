//febiconic serise
#include<stdio.h>
int main(){
    int n,first=0,second=1,i,result;
	printf("Enter a Number of terms:");
		scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i<=1){
			result=i;
		}else{
			result=first+second;
			first=second;
			second=result;
		}
		printf("%d ",result);
	}
	
}
