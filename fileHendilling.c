#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
struct dob{
	char dd[2];
	int mm[2];
	int yy[2];
};
struct student{
	int id;	
	char name[20];
	char address[20];
	struct dob db;
};
void main(){
	int n=2,i=0;
	char ch[1];
	struct student *s;
	s=(int*)malloc(2*sizeof(struct student));
	do{
	   printf("Enter a student:%d\n",i+1);
	   printf("Id:");
	   scanf("%d",s[i].id);
	   getchar();
	   printf("Name:");
	   gets(s[i].name);
	   printf("Address:");
	   gets(s[i].address);
	   printf("Date of Birth:dd//mm//yy");
	   //scanf("%[^//] %[^//] %[^\n]",s[i].db.dd,s[i].db.mm,s[i].db.yy);
	   //getchar();
	   i++;
	   n=n+1;
	   s=(int*)realloc(s,n);
	   printf("\nDo you want another student:(Y for Yes)");
	   gets(ch);
	}while(ch=="y"||ch=="Y");
	FILE *f;
	f=fopen("student.txt","w+b");
	if(f==NULL){
		printf("File Not created");
		exit(1);
	}
	fwrite(s,sizeof(struct student),n,f);
	struct student *st;
	st=(int*)malloc(n*sizeof(struct student));
	fread(st,sizeof(struct student),n,f);
	printf("ID\t Name\t ADDRESS\tDOB\n");
	for(i=0;i<n;i++){
		if(strcmp(toupper(st[i].address),"KATHMANDU")==0)//toupper from#include<ctype.h>
		{
			printf("%d\t %s\t %s\t %s\t\\ %s\\ %s\n",st[i].id,st[i].name,st[i].address,
			st[i].db.dd,st[i].db.mm,st[i].db.yy);
	}
	}
	fclose(f);
}
