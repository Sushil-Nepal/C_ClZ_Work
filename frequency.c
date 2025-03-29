#include<stdio.h>
void main(){
	int num[10],i=0,count=0,j;
	int stdnum=0;
	printf("Enter a Numbers:\n");
	do{
		scanf("%d",&num[i]);
		i++;	
	}while(i<10);
	for(i=0;i<10;i++)
	{
	 	for(j=0;j<10;j++)
		{
	 		if(num[i]==num[j]&&num[j]!=0)
			{
	 			num[j]=0;
	 			count++;
			}
	 	}
	 	if(num[i]!=0)
		{
	 		printf("%d Is repeat %d Times.",num[i],count);	
		}
	 	count=0;
	}
	count=0;
	for(i=0;i<10;i++){
		if(num[i]==0){
			count++;
		}
	}
	if(count!=0){
		printf("0 Is repeat %d Times.",count);
	}	
}
