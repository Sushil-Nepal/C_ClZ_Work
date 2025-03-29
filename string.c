#include<stdio.h>
#include<string.h>
void main(){

	char a[10]="ram";
	char b[10]="Ram";
   // char c=strcat(a,b);
   // char c=strcpy(a,b);
    int c=strcmp(a,b);
	puts(a);
	puts(b);
   //puts(c);
	printf("%d",c);//c is negative a<b,if c is possitive a>b.
}
