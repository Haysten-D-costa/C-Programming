/* *****************************************************************************************************************
Lab ID        : 6.4
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find and print the sum of first 'n' natural numbers...
Input         : range
Output        : sum of first n numbers
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function Declaration/Prototype...
int sumOfFirst(int range); 

int main() //Main Function...
{
    int range; //Range upto which sum is to be calculated...
    printf("\nEnter the no. of terms(n) : ");
    scanf("%d", &range);
    printf("\nRESULTS :\n");
    printf("\n-> Range you entered : %d", range);
    printf("\n-> Sum of first '%d' natural numbers : %d\n\n", range, sumOfFirst(range)); //Display the sum of terms upto range...

    return(0);
}
int sumOfFirst(int range) //Function Definition...
{ 
    int sum = 0; //Stores the sum of each digit...
    for(int i=1; i<=range; i++) //To sum sum up each term...[FOR Loop]
    { 
        sum += i; //sum = sum + i
    }
    return(sum);
}
