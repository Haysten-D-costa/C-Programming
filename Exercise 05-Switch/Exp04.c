//CP TO FIND FACTORIAL(0) AND CHECK WHETHER NO.IS EVEN OR ODD(1)
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    int code;

    //INPUT OF VARIABLES
    printf("\nEnter an operation code:\n\nFor Factorial innput 0,\nFor Even-Odd input 1.....     :  ");
    scanf("%d",&code);

    //OUTPUT
    printf("\nValue of code entered = %d",code);

    switch(code)
    {
        case 0: {
                    printf("\nFACTORIAL code chosen");
                    //DECLARATION AND INITIALIZATION OF VARIABLES
                    int Fact=1,Num;

                    //INPUT OF VARIABLES
                    printf("\nEnter a number:  ");
                    scanf("%d",&Num);
                    printf("\nNumber entered = %d",Num);

                    //COMPUTATION(LOOP)
                    while(Num>0)
                    {
                        Fact=Fact*Num;
                        Num=Num-1;
                    }

                    //OUTPUT
                    printf("\nFACTORIAL = %d",Fact);
                    return(0);
                }
                break;

        case 1: {
                    printf("\nEVEN-ODD code chosen");

                    //DECLARATIONN OF VARIABLES
                    int Num;

                    //INPUT OF VARIABLES
                    printf("\nEnter  a number :  ");
                    scanf("%d",&Num);

                    //OUTPUT
                    printf("\nEntered number = %d",Num);

                    //PROCESS(STATEMENTS) AND OUTPUT
                    if (Num%2==0)
                        printf("\nNumber entered is an EVEN no.");
                    else
                        printf("\nNumber entered is an ODD no.");

                    return(0);
                }
                break;
        default: printf("\nINVALID CODE ENTERED");
    }
return(0);
}
