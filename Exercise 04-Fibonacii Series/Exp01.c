/* *****************************************************************************************************************
Lab ID        : 4.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find fibonacii series upto a number(range)...
Input         : num
Output        : factorial of that number
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function to display the fibonacii series upto range...
void fibonacii(int range); 

int main()
{
    int range;
    printf("\nEnter the range : ");
    scanf("%d", &range);
    printf("\nRESULT : \n");
    printf("\n-> Range entered : %d", range);
    fibonacii(range); //Function call to fibonacii() function...

    return (0);
}
void fibonacii(int range)
{
    int num1 = 0, num2 = 1;
    if(range == 0) { return; }
    else if(range == 1) 
    { 
        printf("\n-> Fibonacii series upto '1' term is :\n");
        printf("   %d\t", num1); 
    }
    else if(range == 2) 
    { 
        printf("\n-> Fibonacii series upto '2' terms is :\n");
        printf("   %d\t%d\t", num1, num2); 
    }
    else if(range > 2) 
    {
        printf("\n-> Fibonacii series upto '%d' terms is : \n", range);
        printf("   %d\t%d\t", num1, num2);
        for(int i=1; i<=range-2; i++)
        {
            int num3 = num1 + num2;
            printf("%d\t", num3);
            num1 = num2;
            num2 = num3;
        }
    }
    else { printf("\nInvalid range entered !\n"); }
}