//CP TO IMPLEMENT "STRCMP" FUNCTION
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//STRING HEADER FILE
#include<string.h>
void main()
{
    //DECLARATION OF STRINGS [A and B] AND VARIABLES
    char A[20],B[20];
    int outp;
    printf("Enter first word : ");
    gets(A);
    printf("\nEnter second word : ");
    gets(B);
    //STRING FUNCTION OPERATION
    outp = strcmp(A,B);
    //OUTPUT OF STRING
    if(outp==0)
        printf("\nBoth words entered are the same");
    else
        printf("\nBoth words entered are not the same");
}

