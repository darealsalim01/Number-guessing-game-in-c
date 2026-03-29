#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
  srand(time(NULL));

  int Guess,RandomNumber= (rand() % 10) + 1;

  printf("*****Number Guessing Game*****\n");
  printf("Guess a number from 1 to 10 :\n");
  scanf("%d",&Guess);

  printf("Your Guess is %s , The number is %d\n",(Guess == RandomNumber)?"Right":"Wrong",RandomNumber);
  return 0;
}
