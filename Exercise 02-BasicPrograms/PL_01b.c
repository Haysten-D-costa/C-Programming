/* *****************************************************************************************************************
Lab ID        : 2.2
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find area and circumference of a circle...
Input         : radius
Output        : circumference
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>

//Function computes the area of circle...
float computeArea(float radius);
//Function computes the circumference of circle...
float computeCircumference(float radius);

int main()
{
    float radius;
    float area, circumference;
    printf("Enter the radius for circle :  ");
    scanf("%f", &radius);
    printf("\nRESULT : \n");
    printf("\n-> Radius entered is : %f", radius);
    printf("\n-> Area of circle is : %f", computeArea(radius));
    printf("\n-> Circumference of circle is : %f", computeCircumference(radius));
    printf("\n\n");

    return(0);
}
float computeArea(float radius)
{
    return(3.14 * radius * radius);
}
float computeCircumference(float radius) 
{
    return(2 * 3.14 * radius);
}