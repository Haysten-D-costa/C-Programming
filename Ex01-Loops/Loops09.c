/* *****************************************************************************************************************
Lab ID        : 1.9
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find sum of even and odd numbers till range...
Input         : range 
Output        : sum of odd and even numbers upto range...
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

void sumOfEvenOdd(int range); //Computes the sum of Even and Odd numbers upto range...
int main()
{
    int range;
    printf("\nEnter the range : ");
    scanf("%d", &range);
    printf("\nRESULT : \n");
    printf("\n-> Range entered : %d", range);
    sumOfEvenOdd(range);

    return(0);
}
void sumOfEvenOdd(int range) 
{
    int evenSum = 0, oddSum = 0;
    for(int i=1; i<=range; i++) 
    {
        if((i % 2) != 0) { oddSum += i; }
        if((i % 2) == 0) { evenSum += i; }
    }
    printf("\n-> Sum of odd terms upto '%d' is  : %d", range, oddSum);
    printf("\n-> Sum of even terms upto '%d' is : %d", range, evenSum);
}
