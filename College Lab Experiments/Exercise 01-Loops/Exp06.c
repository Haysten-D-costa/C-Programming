/* *****************************************************************************************************************
Lab ID        : 1.6
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to check if an entered number is a palindromic number or not
Input         : number
Output        : Statement...
Algorithm     : Step 1 : Start,
                Step 2 : Take input from user(in main - line 28),
                Step 3 : Store the remainders in an array(in checkPalindrome - line 39),
                Step 4 : Check if no. entered has even or odd no. of digits,
                    -> Step 4.1 : if [' odd'] print("Not a palindromic number...") -> Stop.
                    -> Step 4.2 : if ['even'],
                            -> Step 4.2.1 : Using For loop, compare the first and last elements of array...
                            -> Step 4.2.2 : Increment low, and decrement up...
                            -> Step 4.2.3 : Repeat until low !< up.
                Step 5 : Stop.
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

void checkPalindrome(long int num); //Check and prints whether the no. entered is a palindrome...
int main()
{
    long int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("\nRESULT :\n");
    printf("\n-> Number you entered : %d", num);
    checkPalindrome(num); //Calls checkPalindrome() finction...

    printf("\n\n");

    return(0);
}
void checkPalindrome(long int num) 
{
    int count = 0, A[100];
    while(num > 0) 
    { 
        int remainder = num % 10; //To access the remainder...
        A[count] = remainder; //To store each digit of entered number to array...
        count++; //To count no. of digits...
        num /= 10; //To eliminate the last digit (After storing)...
    }
    printf("\n-> Reverse of the number entered : ");
    for(int i=0; i<count; i++) 
    {
        printf("%d", A[i]);
    }
    if((count % 2) == 0) 
    {
        int low; //Lowest element of array(A[0])...
        int up = count; //Upper element of array(A[n-1])...
        for(int low = 0; low<up; low++, up--) 
        {
            if(A[low] == A[up-1]) //Comparing lowermost and uppermost elements...
            { 
                printf("\n-> Is a Palindromic number\n"); 
                break; 
            }
            else 
            { 
                printf("\n-> Not a palindromic number\n"); 
                break; 
            }
        }
    }
    else { printf("\n-> Not a palindromic number\n"); } //If odd, cannot be a palindrome...
}