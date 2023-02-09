/* *****************************************************************************************************************
Lab ID        : 5.2
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to implement a simple calculator...
Input         : num1, num2
Output        : result
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */

#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    int num1,num2,result;
    char OP;

    //INPUT OF VARIABLES
    printf("\nEnter first number:  ");
    scanf("%d",&num1);
    printf("\nEnter second number:  ");
    scanf("%d",&num2);
    printf("\nEnter operator:  ");

    /* SPECIAL  CASE...since compiler doesn't accept CHAR input(skips)*/
    fflush(stdin);
    scanf("%c",&OP);


    //DECISION MAKING AND OUTPUT
    printf("\nValue of first number = %d",num1);
    printf("\nValue of second number = %d",num2);
    printf("\nOperator added = %c",OP);

    switch(OP)
    {
        case'+':result = num1+num2;
                printf("\nSUM = %d",result);
                break;
        case'-':result = num1-num2;
                printf("\nSUB = %d",result);
                break;
        case'*':result =  num1*num2;
                printf("\nMULT = %d",result);
                break;
        case'/':result = num1/num2;
                printf("\nDIV = %d",result);
                break;
        case'%':result = num1%num2;
                printf("\nMOD = %d",result);
                break;
        default:printf("\nIncorrect input");
    }
    return(0);
}
