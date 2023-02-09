/* *****************************************************************************************************************
Lab ID        : 6.5
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find and print the sum of first 'n' natural numbers using recursive function...
Input         : range
Output        : sum of first n numbers
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

//Function inds and print the sum of first 'n' natural numbers...
int sumofn(int); 

int main() //Main function...
{
    int S,n;
    printf("\nEnter the count:  ");
    scanf("%d",&n);
    printf("\nCount(no. of terms to be added) = %d",n);
    S=sumofn(n); //Function call, and storing returned value to 'S'...
    printf("\nSUM of '%d' terms = %d",n,S);
    return(0);
}
int sumofn(int n) //Function Definition...
{
    if(n==0)
        return(0);
    else
        return(n+sumofn(n-1));
}

