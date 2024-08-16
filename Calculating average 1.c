
/*QUESTION :--
Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
*/
//ANSWER :-- 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//accepting distance covered by bike and car....
	//let i be distance covered by bike and car:-
	int i;
	printf("Enter covered distance by your vechile : ");
	scanf("%d",&i);
	
	//accepting use of fuel in trip ....
	//let j be used fuel in the trip:-
	int j;
	printf("Enter used fuel in the trip : ");
	scanf("%d",&j);
	
	//calculating....
	float average=i/j;
	printf("Avdrage of your vechile is : %.2f",average);	
	return 0;
}





      
