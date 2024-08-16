/*QUESTION :--
//Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.*/

//ANSWER :--
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//accepting days.....
	int days;
	printf("Enter days : ");
	scanf("%d",&days);
	
	//calculating years in a day.....
	int year=days/365;
	printf("Year : %d\n",year);
	
	//days remaining after calculating years.....
    int rmdays1=days%365;
	
	//calculating months ......
	int months=rmdays1/30;
	printf("months : %d\n",months);
	
	//days remaining after calculating months.....
	int rmdays2=rmdays1%30;
	
	//calculating days .....
	printf("days : %d\n",rmdays2);
	return 0;
}
