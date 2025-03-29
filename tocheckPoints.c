#include<stdio.h>
void main(){
	int x1,x2,x3,y1,y2,y3,ans;
	printf("Enter codinate:");
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	ans=(y3-y1)-((y2-y1)/(x2-x1))*(x3-x1);
	if(ans==0){
		printf("Given cordinate are in same line.");
	}else{
		printf("Given Cordinate are not in same line.");
	}
	
}
