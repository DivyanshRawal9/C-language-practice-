//QUESTION:--
//Creat 3*3 matrix and print values.

//ANSWER:--
#include <stdio.h>
int main(){
//creating matrix:-
  int myMatrix [3][3]={{1,2,4},{4,5,6},{7,8,9}};
 //printing values:-
 int i,j;
  for(i=0;i<3;i++){
  
  for(j=0;j<3;j++){
  printf ("%d\n", myMatrix[j][i]);}
  
  }
  
  return 0;
}