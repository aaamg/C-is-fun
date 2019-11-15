#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addTwoInts(int num1, int num2){
    return num1 + num2;
};

int subTwoInts(int num1, int num2){
    return num1 - num2;
};

int multiplyTwoInts(int num1, int num2){
    return num1 * num2;
};

int divideTwoInts(int num1, int num2){
    return num1 / num2;
};

int number1, number2;
int answer;



int main(){

    printf("Welcome to the calculator!\n\n");
    printf("Would you like to add, subtract, divide, or multiply?\n\n");
    printf("1 for add, 2 for subtract, 3 for divide, or 4 for multiply \n\n");

    scanf("%d", &answer);

    printf("Number 1?\n\n");
    scanf("%d", &number1);
    printf("Number 2?\n\n");
    scanf("%d", &number2);


    switch (answer)
{
    case 1: printf("Added Sum is %d\n\n",addTwoInts(number1,number2));// code to be executed if n = 1;
        break;
    case 2: printf("Subtracted Sum is %d\n\n",subTwoInts(number1,number2));// code to be executed if n = 2;
        break;
    case 3: printf("Divided Sum is %d\n\n",divideTwoInts(number1,number2));// code to be executed if n = 2;
        break;
    case 4: printf("Multiplied Sum is %d\n\n",multiplyTwoInts(number1,number2));// code to be executed if n = 2;
        break;
    default: printf("You must only choose add, subtract, multiply, or divide!");// code to be executed if n doesn't match any cases
}

    return 0;
}




//if(strncmp(answer, add, 3)){

        //printf("Added Sum is %d\n\n",addTwoInts(number1,number2));

    //} else if (strncmp(answer, subtract, 3)) {

        //printf("Subtracted Sum is %d\n\n",subTwoInts(number1,number2));

    //} else if (strncmp(answer, multiply, 3)) {

        //printf("Multiplied Sum is %d\n\n",multiplyTwoInts(number1,number2));

    //} else if (strncmp(answer, divide, 3)) {

        //printf("Divided Sum is %d\n\n",divideTwoInts(number1,number2));

    //} else {

        //printf("You must only choose add, subtract, multiply, or divide!");
    //};


    //printf("Added Sum is %d\n\n",addTwoInts(number1,number2));

    //printf("Subtracted Sum is %d\n\n",subTwoInts(number1,number2));

    //printf("Multiplied Sum is %d\n\n",multiplyTwoInts(number1,number2));

    //printf("Divided Sum is %d\n\n",divideTwoInts(number1,number2));
