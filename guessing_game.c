#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int random,guess;
  int no_of_guess=0;
  srand(time(NULL));

  printf("welcome to guessing number game!!\n");
  random= rand() % 100+1;

  do{
    printf("please enter the number between 1 to 100: ");
    scanf("%d", &guess);
    no_of_guess++;

    if(guess<random){
      printf("guess a larger number.\n");
    }else if(guess>random){
      printf("guess a smaller number.\n");
    }else{
      printf("congratulations!!you have guessed the number in %d attempts.",no_of_guess);
    }
  }while(guess!=random);
  printf("\nbye bye,thanks for playing..");
  printf("\ndeveloped by: Atul Negi");
}