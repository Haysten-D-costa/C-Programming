//CP TO IMPLEMENT A SIMPLE CALCULATOR
//HAYSTEN D'COSTA(21CO56)

#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    int num1,num2,result;
    char OP;

    //INPUT OF VARIABLES
    printf("\nEnter first number:  ");
    scanf("%d",&num1);
    printf("\nEnter second number:  ");
    scanf("%d",&num2);
    printf("\nEnter operator:  ");

    /* SPECIAL  CASE...since compiler doesn't accept CHAR input(skipped)*/
    fflush(stdin);
    scanf("%c",&OP);


    //DECISION MAKING AND OUTPUT
    printf("\nValue of first number = %d",num1);
    printf("\nValue of second number = %d",num2);
    printf("\nOperator added = %c",OP);

    switch(OP)
    {
        case'+':result = num1+num2;
                printf("\nSUM = %d",result);
                break;
        case'-':result = num1-num2;
                printf("\nSUB = %d",result);
                break;
        case'*':result =  num1*num2;
                printf("\nMULT = %d",result);
                break;
        case'/':result = num1/num2;
                printf("\nDIV = %d",result);
                break;
        case'%':result = num1%num2;
                printf("\nMOD = %d",result);
                break;
        default:printf("\nIncorrect input");
    }
    return(0);
}
