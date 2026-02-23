#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

 int guess , random ;
 int Num_of_guess = 1;
 srand(time(NULL));

 printf("\n------Welcome to the game brother-----\n");
 random = rand() % 100 + 1;// library rand and time.h and stdlib.h



 printf(" %d",random);
  
 do{
    printf("Guess the number between (1-100) : ");
    scanf("%d",&guess);

     Num_of_guess ++ ;//----> wrong position

     if(guess < 1 || guess > 100){
        printf("\n----shatani nhi bachha-----\n"); 
    }else if(guess < random){
        printf("\n----guess a larger number----\n");
    }
    else if(guess > random){
        printf("\n----guess a smaller number---\n");
    }else{
        printf("\n----Shabaash beta----\n");
        printf("\n----it took %d attempts to win-----\n",Num_of_guess);
    }

    
 }while(guess != random);

 printf("\n{-----Thank you !------}\n");
 printf("\n----->Developed by Himesh kandpal<-------\n");



    return 0;
}