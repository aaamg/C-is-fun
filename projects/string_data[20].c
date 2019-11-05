#include <stdio.h>

int main () {
   char str1[20], str2[30];

   printf("Enter your first name: ");
   scanf("%s", str1);

   printf("Enter your last name: ");
   scanf("%s", str2);

   printf("Your name: %s %s\n", str1, str2);
   printf("Last Name: %s", str2);

   return(0);
}

//
