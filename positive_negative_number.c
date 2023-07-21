#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){
 /* int age = 30;

  //check if our variable is less than zero
  if (age < 0)
  {
    //add what to be executed if the condition is true
    printf("Your condition is a negative");
  }
  else{
    printf("Your condition is positive");
  }*/
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0){
    printf("%i is positive\n", n);
  }
  else if (n < 0){
    printf("%i is negative\n", n);
  }
  else{
    printf("%i is zero\n", n);
  }

    return (0);

}