//QUESTION:--
//Find largest number in given user input .

//ANSWER:--
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//accepting firstnumber from user....
	int first_num;
	printf("Enter your first number : ");
	scanf("%d",&first_num);
	
	//accepting secoundnumber from user....
	int secound_num;
	printf("Enter your secound number : ");
	scanf("%d",&secound_num);
	
		//accepting thirednumber from user....
	int thired_num;
	printf("Enter your thired number : ");
	scanf("%d",&thired_num);
	
	//calculating maximum number .....
	if(first_num>secound_num&&first_num>thired_num){
		printf("first number is largest.");
	}
	
		if(secound_num>first_num&&secound_num>thired_num){
		printf("secound number is largest.");
	}
	
		if(thired_num>secound_num&&thired_num>first_num){
		printf("thired number is largest.");
	}
	return 0;
}