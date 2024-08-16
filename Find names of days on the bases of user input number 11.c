/*QUESTION:--
//Print name of days on the bases of input number using switch function of C language. 

//ANSWER:--
#include <stdio.h>

int main() {
  /*let user enter number and want to find day of week */
  
  int userenterednumber=2; 
  
  switch (userenterednumber){
  
  case 1:
  printf ("Monday");
  break;
  
  case 2:
  printf ("Tuesday");
  break;
  
  case 3:
  printf ("Wednesday");
  break;
  
  case 4:
  printf ("Thursday");
  break;

return 0;
}