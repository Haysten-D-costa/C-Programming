//CP TO DEMONSTRATE PASS BY REFERENCE PARAMETER PASSING
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//FUNCTION DECLARATION
void dispinc(int*,int*);
void main()
{
    //DECLARATION OF VARIABLES
    int x,y;
    //INPUT OF VARIABLES
    printf("\nEnter the values of x and y :\n");
    scanf("%d%d",&x,&y);
    //INITIAL OUTPUT
    printf("\n\nEntered values of x and y are :\nx = %d and y = %d",x,y);
    //FUNCTION CALL
    dispinc(&x,&y);
    //FINAL OUTPUT
    printf("\n\nNew values of x and y are :\nx = %d and y = %d",x,y);
}
//FUNCTION DEFINITION
void dispinc(int *a,int *b)
{
    *a=*a+2;
    *b=*b+4;
}
