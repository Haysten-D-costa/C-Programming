/* *****************************************************************************************************************
Lab ID        : 6.3
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find factorial of an entered number...
Input         : number
Output        : Factorial of that number
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function Displays the factorial of a number...
int factorial(int num); 

int main()
{
    int num;
    printf("\nEnter the no. to find factorial of : ");
    scanf("%d", &num);
    printf("\n-> The factorial of '%d' is : %d", num, factorial(num));
    printf("\n\n");

    return(0);
}
int factorial(int num) 
{
    int fact = 1;
    printf("\n-> Number entered : %d", num);
    while(num > 0) 
    {
        fact *= num;
        num--;
    }
}
