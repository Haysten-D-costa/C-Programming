/* *****************************************************************************************************************
Lab ID        : 9.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find the Product of two matrices....
Input         : two matrices
Output        : resultant, product martix
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

int main() //Main function...
{
    //DECLARATION OF MATRICES AND VARIABLES...
    int A[5][5],B[5][5],C[5][5];
    int r1,r2,c1,c2,i,j,k;
    //INPUT OF VARIABLES[ORDERs]...
    printf("\nEnter the order of matrix -A:\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter order of matrix -B:\n");
    scanf("%d%d",&r2,&c2);

    if(r2==c1)
    {
        printf("\nEnter the elements of matrix -A:\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&A[i][j]);
        printf("\nEnter the elements of matrix -B:\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&B[i][j]);
        //PROCESS OF MULTIPLICAATION OF MATRICES A and B...
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                C[i][j]=0;
                for(k=0;k<c1;k++)
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
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
        //OUTPUT OF THE RESULTANT[SUM MATRIX-C]...
        printf("\nThe resultant sum matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nERROR: MATRIX MULTIPLICATION NOT POSSIBLE \n....check order entered....");
    return(0);
}
