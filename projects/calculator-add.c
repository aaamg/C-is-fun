#include <stdio.h>
#include <stdlib.h>

int main(){
   int a, s;

   printf("Select a number, then another to be added: \n");
   scanf("%d", &a);
   scanf("%d", &s);

   int b = a + s;

   printf("Result: %d", b);
   return 0;
};
