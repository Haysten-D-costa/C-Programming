//CP TO DEMONSTRATE RUN-TIME INITIALIZATION USING GETS
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//STRING HEADER FILE
#include<string.h>
void main()
{
    //DECLARATIONN OF STRING
    char Name[20];
    //INPUT([R-T] INITIALIZATION) OF STRING
    printf("Enter your name : ");
    gets(Name);
    //OUTPUT OF STRING
    printf("\nYour Name : ");
    puts(Name);
}

