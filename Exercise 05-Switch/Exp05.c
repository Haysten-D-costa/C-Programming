/* *****************************************************************************************************************
Lab ID        : 5.5
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find area of circle and square...
Input         : num(choice)...required data then...
Output        : area
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter an operation code:  ");
    scanf("%d",&num);
    printf("\nValue of code entered = %d",num);
    switch(num)
    {
        case 0: {
                    printf("\n\n*AREA OF CIRCLE code chosen*");
                    int r,A;
                    printf("\nEnter value for radius:  ");
                    scanf("%d",&r);
                    printf("\nRadius entered = %d",r);
                    A=3.14*r*r;
                    printf("\nAREA = %d",A);
                    return(0);
                }
                break;
        case 1: {
                    printf("\n\n*AREA OF SQUARE code chosen*");
                    int s,A;
                    printf("\nEnter value for side:  ");
                    scanf("%d",&s);
                    printf("\nSide entered = %d",s);
                    A=s*s;
                    printf("\nAREA = %d",A);
                    return(0);
                }
                break;
        default: printf("\nINVALID CODE ENTERED");
    }
    return(0);
}
