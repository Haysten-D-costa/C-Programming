/* *****************************************************************************************************************
Lab ID        : 1.10
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to display the series : (1). 2, 5, 10, 17, 26,.....
                                                  (2). 1/1, 1/2, 1/3, 1/4, 1/5,.....and find their sum.
Input         : --
Output        : series
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

void displaySeries01(int n);
void displaySeries02(int n);
int main()
{
    int n;
    printf("\nEnter the no. of terms required : ");
    scanf("%d", &n);
    printf("\nRESULT : \n");
    printf("\n-> Number of terms entered is : %d", n);
    displaySeries01(n);
    printf("\n\n");
    displaySeries02(n);

    return(0);
}
void displaySeries01(int n)
{
    int sum = 0;
    printf("\n-> List is : \n");
    for(int i=1; i<=n; i++) 
    {
        printf("   %d\t", (i * i) + 1);
        sum += (i * i) + 1;
    }
    printf("\n-> Sum of first '%d' terms in series is : %d", n, sum);
}
void displaySeries02(int n)
{
    int sum = 0;
    printf("\n-> List is : \n");
    for(int i=1; i<=n; i++) 
    {
        printf("  1/%d\t", i);
        sum += i;
    }
    printf("\n-> Sum of first '%d' terms in series is : 1/%d", n, sum);
}