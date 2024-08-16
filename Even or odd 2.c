//QUESTION :--
//Check number is even or odd using C language.

//ANSWER :--
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Accepting user input ......
	int userinput;
	printf("Enter your number : ");
	scanf("%d",&userinput);
	
	//calculation & printing answer......
	if (userinput%2==0){
		printf("Your number is even.");
	}
	else{
		printf("Your number is odd.");
	}
	return 0;
}
