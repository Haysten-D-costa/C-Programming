/* *****************************************************************************************************************
Lab ID        : 6.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find sum of digits of an entered number...
Input         : number
Output        : sum
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function computes sum of digits of a number...
int digitSumOf(int num); 
int main() 
{
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    printf("\nRESULTS : \n");
    printf("\n-> Number you entered : %d", num);
    printf("\n-> Sum of digits of '%d' is : %d", num, digitSumOf(num));
    
    return(0);
}
int digitSumOf(int num) 
{
    int sum = 0, remainder;
    while(num > 0) 
    {
        remainder = num % 10; //To get the last digit...
        sum += remainder; //sum = sum + remainder (store the last digit)...
        num /= 10; //num = num / 10 (eliminate the last digit)...
    } 
    return(sum);
}
