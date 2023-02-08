/* *****************************************************************************************************************
Lab ID        : 5.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to show use of switch...
Input         : --
Output        : Hey
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

int main()
{
    //Declaration and initializationof variables
    int num,i=0;
    //Input of variables
    printf("\nEnter a number from (0-9):  ");
    scanf("%d",&num);
    switch(num)
    {
    case 0: for(i=0;i<num;i++)
            printf("\nHey");
            break;
    case 1: for(i=0;i<num;i++)
            printf("\nHey");
            break;
    case 2: for(i=0;i<num;i++)
            printf("\nHey");
            break;
    case 3: for(i=0;i<num;i++)
            printf("\nHey");
            break;
    case 4: for(i=0;i<num;i++)
            printf("\nHey");
            break;
    case 5: for(i=0;i<5;i++)
            printf("\nHey");
            break;
    case 6: for(i=0;i<6;i++)
            printf("\nHey");
            break;
    case 7: for(i=0;i<7;i++)
            printf("\nHey");
            break;
    case 8: for(i=0;i<8;i++)
            printf("\nHey");
            break;
    case 9: for(i=0;i<9;i++)
            printf("\nHey");
            break;
    default: printf("\nINVALID INPUT");
    }
    return(0);

}
