/* *****************************************************************************************************************
Lab ID        : 8.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find the sum  of two matrices....
Input         : two matrices
Output        : resultant, sum martix
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

int main() //Main function...
{
    //DECLARATION OF MATRICES AND VARIABLES...
    int A[5][5],B[5][5],C[5][5];
    int r1,r2,c1,c2,i,j;
    //INPUT OF VARIABLES[ORDERs]...
    printf("\nEnter the order of matrix -A:\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter order of matrix -B:\n");
    scanf("%d%d",&r2,&c2);
    //IMP.CONDITION FOR ADDITION...
    if((r1==r2)&&(c1==c2))
    {
        printf("\nEnter the elements of matrix -A:\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&A[i][j]);
        printf("\nEnter the elements of matrix -B:\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&B[i][j]);
        //OUTPUT OF USER INPUTED MATRICES...
        printf("\nMatrix A entered is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix B entered is :\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        //PROCESS OF SUM OF MATRICES A and B...
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        //OUTPUT OF THE RESULTANT[SUM MATRIX-C]...
        printf("\nThe resultant sum matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }
    else
         printf("\nERROR: MATRIX ADDITION NOT POSSIBLE \n....check order entered....");
    return(0);
}
