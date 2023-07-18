//CP TO IMPLEMENT "STRCPY" FUNCTION
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//STRING HEADER FILE
#include<string.h>
void main()
{
    //DECLARATION OF STRINGS
    char A[20],B[20];
    //INPUT OF STRINGS [A and B]
    printf("Enter first word : ");
    gets(A);
    printf("Enter second word : ");
    gets(B);
    //STRING FUNCTION OPERATION
    strcpy(A,B);
    //OUTPUT OF STRINGS
    printf("\n\nResult : %s",A);
}

