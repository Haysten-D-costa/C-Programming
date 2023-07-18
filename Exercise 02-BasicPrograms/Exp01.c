/* *****************************************************************************************************************
Lab ID        : 2.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to check whether no. entered is even or odd...
Input         : num
Output        : Statement whether even or odd
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function displays whether the number entered is even or odd...
void checkEvenOdd(int num); 
int main() //Main Function...
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("\nRESULT : \n");
    printf("\n-> Number entered is : %d", num);
    checkEvenOdd(num); //Function call to checkEvenOdd...
    printf("\n\n");

    return(0);
}
void checkEvenOdd(int num) 
{
    if((num % 2) == 0) 
    {
        printf("\n-> Number '%d' entered is an even number", num);
    }
    else 
    {
        printf("\n-> Number '%d' entered is an odd number", num);
    }
}