//CP TO DEMONSTRATE RUN-TIME INITTIALIZATION USINNG SCANF
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//STDING HEADER FILE
#include<string.h>
void main()
{
    //DECLARATION OF STRING
    char Name[20];
    //[R-T] INITIALIZATION OF STRING (INPUT)
    printf("\nEnter your name : ");
    scanf("%s",Name);
    //OUTPUT OF STRING
    printf("\nYour Name : %s",Name);
}
