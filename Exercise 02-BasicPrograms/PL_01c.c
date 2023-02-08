//CP TO CONVERT TEMP. FROM DEG(C) TO DEG(F):
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    float farh,celc;

    //INPUT OF VARIABLES
    printf("Enter temperature in DEG(C) :  ");
    scanf("%f",&celc);

    //COMPUTATION
    farh = (celc*9.0/5.0)+32;

    //OUTPUT
    printf("\nEntered value of temp. in DEG(C)=  %f\n",celc);
    printf("Value of converted temp. in DEG(F)=  %f\n",farh);

    return(0);

}
