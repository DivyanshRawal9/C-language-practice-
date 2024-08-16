//QUESTION :--
//write c program which convert secounds to hours , minutes , secound.

//ANSWER :--
#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//accepting secounds.....
	int secounds;
	printf("Enter secounds : ");
	scanf("%d",&secounds);
	
	//calculating hours in secounds.....
	int hours=secounds/3600;
	printf("hours : %d\n",hours);
	
	//secounds remaining after calculating hours.....
    int rmsecounds1=secounds%3600;
	
	//calculating minutes ......
	int minutes=rmsecounds1/60;
	printf("minutes : %d\n",minutes);
	
	//secounds remaining after calculating minutes.....
	int rmsecounds2=rmsecounds1%60;
	
	//calculating days .....
	printf("days : %d\n",rmsecounds2);
	return 0;
}