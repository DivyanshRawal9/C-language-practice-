//QUESTION:--
//Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.

//ANSWER:--
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Accepting user number......
	int userinput;
	printf("Enter your number : ");
	scanf("%d",&userinput);
	
	//Finding range of user input.....
	if(userinput>0 && userinput<=10){
		printf("User-input range : [0,10]");
	};
	
		if(userinput>10 && userinput<=20){
		printf("User-input range : [10,20]");
	};
	
		if(userinput>20 && userinput<=30){
		printf("User-input range : [20,30]");
	};
	
		if(userinput>30 && userinput<=40){
		printf("User-input range : [30,40]");
	}
	
		if(userinput>40 && userinput<=50){
		printf("User-input range : [40,50]");
	}
	
		if(userinput>50 && userinput<=60){
		printf("User-input range : [50,60]");
	}
	
		if(userinput>60 && userinput<=70){
		printf("User-input range : [60,70]");
	}
	
		if(userinput>70 && userinput<=80){
		printf("User-input range : [70,80]");
	}
	
	if(userinput<0 || userinput>80){
		printf("User-input : wrong");
	}
	return 0;
}
