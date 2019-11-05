#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int direction,
        sword,
        bow;

    printf("Guide: \n");
    printf("1 for Yes, 2 for No? \n");
    printf("1 for Right, 2 for left? \n\n");
    printf("You wondered down a path do you go left or right? \n\n");
    scanf("%d", &direction);
    //printf("%d", direction);

    if( direction == 1){
//******RIGHT PATH******\\
        //printf("Right \n\n");

        printf("You find a sword, do you pick it up? \n\n");
        scanf("%d", &sword);

        if(sword == 1){
            printf("You have picked the sword up\n\n");
        } else {
            printf("Proceed without it\n\n");
        }


    } else if (direction == 2){
//******RIGHT PATH******\\
        //printf("Left \n\n");

        printf("You find a bow, do you pick it up? \n\n");
        scanf("%d", &bow);

        if(bow == 1){
            printf("You have picked a bow up\n\n");
        } else {
            printf("Proceed without it\n\n");
        }


    } else {
//******RIGHT PATH******\\

        printf("You must choose only 1 or 2 for this game\n\n");
    }

    return 0;
}
