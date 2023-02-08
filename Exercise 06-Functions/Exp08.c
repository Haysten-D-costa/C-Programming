/* *****************************************************************************************************************
Lab ID        : 6.8
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find factorial using recursion....
Input         : num
Output        : factorial of that number...
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

//Function computes and returns factorial of an entered number...
int fact(int);

int main() //Main function...
{
    int num,F;
    printf("\nEnter a number:  ");
    scanf("%d",&num);
    printf("\nNumber you entered = %d",num);
    F=fact(num); //Funciton call to fact function, to compute factorial recursively...
    printf("\nFACTORIAL of %d = %d",num,F);
    return(0);
}
int fact(int num) //Function definition...
{
    if(num==0)
        return(1);
    else
        return(num*fact(num-1));
}

