/* *****************************************************************************************************************
Lab ID        : 6.2
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to reverse an entered number...
Input         : number
Output        : Reverse of that number
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function reverses the entered number...
int reverse(int num); 

int main() //Main Function...
{
    int num;
    printf("\nEnter a number to be reversed : ");
    scanf("%d", &num);
    printf("\nRESULTS :\n");
    printf("\n-> Number entered : %d", num);
    printf("\n-> Reverse of %d is : %d", num, reverse(num));
    printf("\n\n");

    return(0);
}
int reverse(int num) 
{
    int remainder, revNum = 0;
    while(num > 0) 
    {
        remainder = num % 10;
        revNum  = (revNum * 10) + remainder;
        num /= 10; 
    }
    return(revNum);
}