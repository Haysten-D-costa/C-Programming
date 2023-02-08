//CP TO COMPUTE AREA OF CIRCLE(0), AREA OF SQUARE(1)
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    int num;

    //INPUT OF VARIABLES
    printf("\nEnter an operation code:  ");
    scanf("%d",&num);

    printf("\nValue of code entered = %d",num);

    switch(num)
    {
        case 0: {
                    printf("\n\n*AREA OF CIRCLE code chosen*");
                    //DECLARATION OF VARIABLES
                    int r,A;

                    //INPUT OF VARIABLES
                    printf("\nEnter value for radius:  ");
                    scanf("%d",&r);
                    printf("\nRadius entered = %d",r);

                    //COMPUTATION(FORMULA)
                    A=3.14*r*r;

                    //OUTPUT
                    printf("\nAREA = %d",A);
                    return(0);
                }
                break;
        case 1: {
                    printf("\n\n*AREA OF SQUARE code chosen*");
                    //DECLARATION OF VARIABLES
                    int s,A;

                    //INPUT OF VARIABLES
                    printf("\nEnter value for side:  ");
                    scanf("%d",&s);
                    printf("\nSide entered = %d",s);

                    //COMPUTATION(FORMULA)
                    A=s*s;

                    //OUTPUT
                    printf("\nAREA = %d",A);
                    return(0);
                }
                break;
        default: printf("\nINVALID CODE ENTERED");
    }
    return(0);
}
