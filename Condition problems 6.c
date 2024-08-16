//QUESTION:--
//Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".

//ANSWER:--
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Accepting values of p , q , r , s.......
	    int p;
	printf("Enter p value : ");
	scanf("%d",&p);
	
		int q;
	printf("Enter q value : ");
	scanf("%d",&q);
	
		int r;
	printf("Enter r value : ");
	scanf("%d",&r);
	
		int s;
	printf("Enter s value : ");
	scanf("%d",&s);
    //End......
    
    if (
	q>0 && r>0 && s>0 && p%2==0 && q>r && s>p && (r+s)>(p+q)
	)
	{
    	printf("Correct values");
	}
	else{
		printf("Wrong values");
	}
	return 0;
}
