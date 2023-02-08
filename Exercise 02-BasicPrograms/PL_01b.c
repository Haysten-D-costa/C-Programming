//CP TO FIND AREA AND CIRCUMFERENCE OF A CIRCLE:
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
#include<math.h>
int main()
{
    //DECLARATION OF VARIABLES
    int r;
    float A,C;

    //INPUT OF VARIABLES
    printf("Enter value of Radius :  ");
    scanf("%d",&r);

    //COMPUTATION
    A = (3.14*r*r);
    C = (2*3.14*r);

    //OUTPUT
    printf("\nValue of entered radius = %d\n",r);
    printf("Value of computed AREA  = %f\n",A);
    printf("Value of computed CIRCUMFERENCE  = %f\n",C);

    return(0);
}
