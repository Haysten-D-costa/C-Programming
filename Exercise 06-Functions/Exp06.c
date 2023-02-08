/* *****************************************************************************************************************
Lab ID        : 6.6
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find value of X ^ Y using functions....
Input         : x and y
Output        : result
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

//Function computes the value of power to...
void raised(int,int);

int main() //Main function...
{
    int x,y;
    printf("\nEnter value for x:  ");
    scanf("%d",&x);
    printf("\nEnter value for y:  ");
    scanf("%d",&y);
    printf("\nValue of number  entered = %d",x);
    printf("\nValue of number to be raised to %d",y);
    raised(x,y); //Function calling, to compute power to...

    return(0);
}
void raised(int x,int y) //Function definition...
{
    int S=1,i=1;
    while(i<=y)
    {
        S=S*x;
        i++;
    }
    printf("\n\n%d raised to %d = %d",x,y,S);
}