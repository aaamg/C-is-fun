#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char wholeName[14] = "Andrew Garcia";
    char wholeNameTwo[] = "Andrew Garcia";
    printf("My name is %s \n", wholeName);
    printf("My name is %s \n", wholeNameTwo);

    char yourCity[30], yourState[30];
    char myCity[] = "Miami";

    printf("What city do you live in? \n\n");
    fgets(yourCity, 30, stdin);

    printf("Welcome from %s \n", yourCity);

    printf("What state do you live in? \n\n");
    fgets(yourState, 30, stdin);


    //printf("Is your city Miami? %d \n\n", strcmp(yourCity, myCity));

    char myState[] = ", Washington";

    strcat(yourCity, yourState);

    printf("You live in %s", yourCity);

    return 0;
}

