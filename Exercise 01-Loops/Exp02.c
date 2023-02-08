/* *****************************************************************************************************************
Lab ID        : 1.2
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to print multiples of 3(any number) till user set range...
Input         : range
Output        : multiples of num upto range
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

void multiplesOf(int num, int range); //Function to compute and display multiples...
int main() //Main function...
{
    int num, range;
    printf("\nEnter the no. to display its multiples : ");
    scanf("%d", &num);
    printf("Enter the range up to which multiples are required : ");
    scanf("%d", &range);
    printf("\nRESULTS : \n");
    printf("\n-> Number entered : %d ", num);
    printf("\n-> Range you entered : %d \n", range);
    printf("\n-> Multiples of '%d' upto '%d' are :\n   ", num, range);
    multiplesOf(num, range); //Function Call(passes num, and range)...

    return(0);
}
void multiplesOf(int num, int range) //Function definition (function body)...
{ 
    for(int i=0; i<=range; i++) //To check and diaplay multiples...[FOR Loop]
    {
        if((i % num) == 0) { printf("%d\t", i); }
    }
    printf("\n\n");
}
