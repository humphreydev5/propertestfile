#include <stdio.h>

int main(void){
  int age = 30;

  //check if our variable is less than zero
  if (age < 0)
  {
    //add what to be executed if the condition is true
    printf("Your condition is a negative");
  }
  else{
    printf("Your condition is positive");
  }
}