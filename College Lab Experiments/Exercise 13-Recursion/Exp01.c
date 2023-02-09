//CP TO FIND FACTORIAL OF A NUMBER USING RECURSION
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//FUNCTIONN DECLARATION
int fact(int);
void main()
{
    //DECLARATION OF VARIABLES
    int num,F;
    //INPUT OF VARIABLES
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\nNumber entered = %d",num);
    //FUNCTIONN CALL
    F = fact(num);
    //OUTPUT
    printf("\n\nFactorial of %d is %d",num,F);
}
//FUNCTION DEFINITION
int fact(int n)
{
    if(n==0)
        //BASE CASE
        return(1);
    else
        //RECURSION
        return(n*fact(n-1));
}
