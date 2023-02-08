/* *****************************************************************************************************************
Lab ID        : 5.3
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to display days of week using certain number codes...
Input         : num
Output        : day of week
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

int main()
{
    int day;
    printf("Enter the day code:  ");
    scanf("%d",&day);
    printf("Entered day code value = %d",day);

    switch(day)
    {
        case 1: printf("\nMONDAY");
                break;
        case 2: printf("\nTUESDAY");
                break;
        case 3: printf("\nWEDNESDAY");
                break;
        case 4: printf("\nTHURSDAY");
                break;
        case 5: printf("\nFRIDAY");
                break;
        case 6: printf("\nSATURDAY");
                break;
        case 7: printf("\nSUNDAY");
                break;
        default: printf("\nIncorrect input code...\nPlease verify code and try again\n(Range:1-7) ");
    }
    return(0);
}
