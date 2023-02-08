//CP TO IMPLEMENT "STRCAT" FUNCTION
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//STRING HEADER FILE
#include<string.h>
void main()
{
    //DECLARATION OF STRING
    char A[20],B[20];
    //INPUT OF STRINGS [A and B]
    printf("Enter first word : ");
    gets(A);
    printf("Enter second word : ");
    gets(B);
    //STRING FUNCTION OPERATION
    strcat(A,B);
    //OUTPUT OF STRING
    printf("\nResult : %s",A);
}

