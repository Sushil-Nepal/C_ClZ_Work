#include<stdio.h>
#include<stdlib.h>
struct a{
	char name[20];
};
void main(){
	int n,i,*ptr;
    struct a *st;
	printf("Enter Number of student:");
	scanf("%d",&n);
	st=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%s",st[i].name);
	}
	for(i=0;i<n;i++){
		printf("\n %s\t",st[i].name);
	}
	printf("Size of int:%d",sizeof(st));
	free(st);
	for(i=0;i<n;i++){
		scanf("%s",st[i].name);
	}
	for(i=0;i<n;i++){
		printf("\n %s\t",st[i].name);
	}
}
