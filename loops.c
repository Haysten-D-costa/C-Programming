/* Loops in C-Programming */

#include <stdio.h>

int main()
{
     for(int i=0; i<=10; i++) { printf("%d\t", i); }

     int i = 0; printf("\n\n"); 
     while(i <= 10) {
          printf("%d\t", i);
          i++;
     }

     i = 0; printf("\n\n");
     do {
          printf("%d\t", i);
          i++;
     } while(i <= 10);

     return(0);
}