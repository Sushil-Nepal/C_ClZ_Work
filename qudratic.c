#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float a,b,c,x1,x2,disc,realPart,imaginPart;
	printf("\n Enter a cofficient a,b,C of equation ax^2+bx+c:");//take input coff from user
		scanf("%f %f %f",&a,&b,&c);//store a value
	disc=b*b-4*a*c;
	if(disc>=0){
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b-sqrt(disc))/(2*a);
		printf("Roots Are %.2f and %.2f",x1,x2);
	}else{
		disc=(-1)*disc;
		realPart=-b/(2*a);
		imaginPart=sqrt(disc)/(2*a);
		printf("Roots Are %.2f+%.2fi And %.2f-%.2fi",realPart,imaginPart,realPart,imaginPart);	
	}
}
