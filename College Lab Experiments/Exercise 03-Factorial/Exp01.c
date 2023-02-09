/* *****************************************************************************************************************
Lab ID        : 3.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find factorial of an entered number...
Input         : num
Output        : factorial of that number
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
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
