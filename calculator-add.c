#include <stdio.h>
#include <stdlib.h>

int main(){
   int a ,s;

   printf("Add two numbers\n");
   scanf("%d \n", &a);
   scanf("%d \n", &s);

   int b = a + s;

   printf("Hit enter for your result: %d", b);
   return 0;
};
