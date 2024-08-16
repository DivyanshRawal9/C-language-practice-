#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		//Accepting coordinates of points :--
	
	//point 1 coordinates :--
	    float x1;
	printf("Enter the value of coordinate x1 of point : ");
	scanf("%f",&x1);
	
		float y1;
	printf("Enter the value of coordinate y1 of point : ");
	scanf("%f",&y1);
	
	//point 2 coordinates :--
		float x2;
	printf("Enter the value of coordinate x2 of point : ");
	scanf("%f",&x2);
	
		float y2;
	printf("Enter the value of coordinate y2 of point : ");
	scanf("%f",&y2);
	
	//calculation of distance between 2 points :--
	
	float distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	//printing result of calculation :--
	printf("%f",distance);
	return 0;
}