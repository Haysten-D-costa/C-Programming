/* *****************************************************************************************************************
Lab ID        : 10.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find the Transpose of a matrix....
Input         : a matrix
Output        : resultant, transposed martix
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

int main()  //Main Funciton...
{
    //DECLARATION OF VARIABLES AND MATRICES
    int A[10][10],B[10][10],i,j,r,c;
    //INPUT OF VARIABLES
    printf("\nEnter the order of matrix A:\n");
    scanf("%d%d",&r,&c);
    //INPUT OF MATRIX A
    printf("\nEnter the elements of matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    //PROCESS OF TRANSPOSITION OF MATRIX
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    //OUTPUT OF USER ENTERED MATRIX
    printf("\nEntered matrix A is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix A is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    return(0);
}
