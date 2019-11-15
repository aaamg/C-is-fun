#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int i;

int userRoll;
int computerRoll;

int test1;
int test2;
int test3;
int test4;

int rounds;

int userTotal;
int computerTotal;

int test;

int main(){
    srand(time(0));//Set our random numbers
    printf("How many rounds? \n");
    scanf("%d", &rounds);



//Random dice rolls
    printf("\nYour rolls: \n");
    for(i=0; i < rounds; i++){
        userRoll = (rand() % 6) + 1;
        test1 += userRoll;
        printf("%d \n", userRoll);
        //printf("tst1: %d \n", test1);
        }

    printf("\nComputers Rolls: rolls: \n");
    for(i=0; i < rounds; i++){
        computerRoll = (rand() % 6) + 1;
        test2 += computerRoll;
        printf("%d \n", computerRoll);
        //printf("tst2: %d \n", test2);
        }

//Test--dont need prints when it works
        userTotal = test1;
        computerTotal = test2;
        //printf("\n\nMe %d \n", userTotal);W
        //printf("PC %d \n", computerTotal);


//Totaling the dice rolls
    //userTotal = userRoll;
    //computerTotal = computerRoll;

//Printing out winner statement
    if(userTotal > computerTotal){
        printf("\n\nYou win!\n\n");
        printf("You: %d, Computer: %d", userTotal, computerTotal);
    } else if(userTotal < computerTotal){
        printf("\n\nThe computer wins!\n\n");
        printf("You: %d, Computer: %d", userTotal, computerTotal);
    } else {
        printf("\n\nYou tied...\n\n");
        printf("You: %d, Computer: %d", userTotal, computerTotal);
    }
    return 0;
}


     //for(i=0; i < rounds; i++){
        //total = computerRoll;
        //printf("Computer Total: %d \n", total);
        //}

        //int total = (computerRoll + computerRoll) ;
        //printf("Computer Total: %d", total);



        //Totaling the dice rolls
      //switch (rounds)
//{
    //case 1: userTotal = userRoll;// code to be executed if n = 1;
            //computerTotal = computerRoll;
        //break;
    //case 2: userTotal = userRoll + userRoll;// code to be executed if n = 2;
            //computerTotal = computerRoll + computerRoll;
        //break;
    //case 3: userTotal = userRoll + userRoll + userRoll;// code to be executed if n = 2;
            //computerTotal = computerRoll + computerRoll + computerRoll;
        //break;
    //case 4: userTotal = userRoll + userRoll + userRoll + userRoll;// code to be executed if n = 2;
            //computerTotal = computerRoll + computerRoll + computerRoll + computerRoll;
        //break;
    //default: printf("\n\nYou may only choose 1 - 4! \n\n");// code to be executed if n doesn't match any cases
//}
