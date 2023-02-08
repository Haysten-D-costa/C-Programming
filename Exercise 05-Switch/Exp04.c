/* *****************************************************************************************************************
Lab ID        : 5.4
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find factorial and check whether no. is even or odd...
Input         : num
Output        : factorial and statement(even or odd)
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>
int main()
{
    int code;
    printf("\nEnter an operation code:\n\nFor Factorial innput 0,\nFor Even-Odd input 1.....     :  ");
    scanf("%d",&code);
    printf("\nValue of code entered = %d",code);
    switch(code)
    {
        case 0: {
                    printf("\nFACTORIAL code chosen");
                    int Fact=1,Num;
                    printf("\nEnter a number:  ");
                    scanf("%d",&Num);
                    printf("\nNumber entered = %d",Num);
                    while(Num>0)
                    {
                        Fact=Fact*Num;
                        Num=Num-1;
                    }
                    printf("\nFACTORIAL = %d",Fact);
                    return(0);
                }
                break;
        case 1: {
                    printf("\nEVEN-ODD code chosen");
                    int Num;
                    printf("\nEnter  a number :  ");
                    scanf("%d",&Num);
                    printf("\nEntered number = %d",Num);
                    if (Num%2==0)
                        printf("\nNumber entered is an EVEN no.");
                    else
                        printf("\nNumber entered is an ODD no.");
                    return(0);
                }
                break;
        default: printf("\nINVALID CODE ENTERED");
    }
return(0);
}
