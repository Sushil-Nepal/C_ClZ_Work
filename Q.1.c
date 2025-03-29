/*According to a Gergorian Calender,it was a monday on date 01/01/01. If any year is input through the 
keyboards write a code to find out what is the day is first januaryof this year.
*/
#include<stdio.h>
void main(){
	int year,rem;
	printf("Enter a Year:");
	scanf("%d",&year);
	rem=((year-1)*365)%7;//year-1 beacaus of monday is day of 1st year not 1st day.
	switch(rem){
		case 0:
			printf("1st jan of %d is Monday.",year);
			break;
		case 1:
			printf("1st jan of %d is Tuesday.",year);
			break;
		case 2:
			printf("1st jan of %d is Wednasday.",year);
			break;
		case 3:
			printf("1st jan of %d is Thusday.",year);
			break;
		case 4:
			printf("1st jan of %d is Friday.",year);
			break;
		case 5:
			printf("1st jan of %d is Saturday.",year);
			break;
		case 6:
			printf("1st jan of %d is Sunday.",year);
			break;
		default:
			printf("Impossible");
			
	}
}
