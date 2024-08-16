//QUESTION:--
//Compare between two values using C language.

//ANSWER:--
#include <stdio.h>
#include<stdbool.h>

int main() {
// ture=1 and false=0

//creating 2 variables....

  int x;
  printf("Enter first num : ");
 scanf("%d",&x);

  int y;
 printf("Enter secound num : ");
 scanf("%d",&y);

  //printing there values....
  printf ("2 and 5 is same?:-%d\n",x==y);
  
  printf ("2 and 5 is different?:-%d\n",x!=y);
  
  printf ("Is 2 greater than 5?:-%d\n",x>y);
  
  printf ("Is 2 smaller than 5?:-%d",x<y);
  
  return 0;
}