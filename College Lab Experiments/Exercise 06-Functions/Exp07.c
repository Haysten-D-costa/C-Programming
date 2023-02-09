/* *****************************************************************************************************************
Lab ID        : 6.7
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to demonstrate pass by value....
Input         : values(num1, num2)
Output        : result
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

//Funtion to show Pass By Value...
int pasSum(int,int);

int main() //Main Funciton...
{
    int num1,num2,SUM;
    printf("\nEnter first number:  ");
    scanf("%d",&num1);
    printf("\nEnter second number:  ");
    scanf("%d",&num2);
    printf("\nFirst number entered = %d\nSecond number entered = %d",num1,num2);
    SUM=pasSum(num1,num2);  /*This is PASS BY VALUE..ie..passing values
        Here we *pass the values* inputed by user, to the Called function for computation*/
        
    printf("\nSum of %d and %d = %d",num1,num2,SUM);
    return(0);
}
int pasSum(int num1,int num2)
{
    int S;
    S=num1+num2;
    return(S);  /*This computed value is again passed to the calling function and stored in
                    SUM. In the called function the values are printed*/
}
