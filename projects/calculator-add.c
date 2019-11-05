#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, s, d, f, g, h, j, k, q, w, e;
    const char* oper;

    printf("To use the calculator, type \n");
    printf("add, subtract, multiply, or divide: \t");
    scanf("%s", &oper);

    if(*oper == "add"){
            printf("Select a number, then another to be added: \n");
            scanf("%d", &a);
            scanf("%d", &s);

            int b = a + s;

            printf("Result: %d \n", b);
            //printf("You chose to %s !", &oper);

    } else if(*oper == "subtract"){
            printf("Select a number, then another to be subtracted: \n");
            scanf("%d", &d);
            scanf("%d", &f);

            int q = d - f;

            printf("Result: %d \n", q);
            //printf("You chose to %s !", &oper);
    } else if(*oper == "divide"){
            printf("Select a number, then another to be divided: \n");
            scanf("%d", &g);
            scanf("%d", &h);

            int w = g / h;

            printf("Result: %d \n", w);
            //printf("You chose to %s !", &oper);
    } else if(*oper == "multiply"){
            printf("Select a number, then another to be multiplied: \n");
            scanf("%d", &j);
            scanf("%d", &k);

            int e = j * k;

            printf("Result: %d \n", e);
            //printf("You chose to %s !", &oper);
    } else {

        printf("You are not adding");
    }


    return 0;
};

//= is used for assignment and == is used for equality.
