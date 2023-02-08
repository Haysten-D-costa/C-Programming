#include <stdio.h>

//Function returns the factorial of a number, passed as argument...
int factorial(int num);

int main() 
{
     int num;
     printf("\nEnter number to find factorial of : ");
     scanf("%d", &num);
     printf("\nRESULT : \n");
     printf("\n-> Number entered is    : %d", num);
     printf("\n-> Factorial of '%d' is : %d", num, factorial(num));

     return(0);
}
int factorial(int num) //Function definition...
{
     int fact = 1;
     while(num > 0) //Since, anything x '0' = 0. [Base Case]...
     {
          fact *= num; //Multiply and store in fact...
          num--; //Decrenent num...
     }
     return(fact); //Return num...
}
