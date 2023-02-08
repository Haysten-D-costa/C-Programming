/* *****************************************************************************************************************
Lab ID        : 2.3
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to Convert given temperature :
                    1. From Calvin to Fahrenheit,
                    2. From Fahrenheit to Calvin.....
                    
Input         : range
Output        : sum of first n numbers
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include <stdio.h>
// To enable use the functions : system("clear") and system("pause")...
#include <stdlib.h> 

//Function converts temperature from Degree(calvin) to Fahrenheit...
float toFahrenheit(float temp); 
//Function converts temperature from Fahrenheit to Degree(calvin)...
float toCalvin(float temp); 

int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\n\n1 -> To convert from Calvin to Fahenheit");
        printf("\n2 -> To convert from Fahrenheit to Calvin");
        printf("\n0 -> To exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1 : {
                float temperatureCal;
                printf("Enter temperature in Degree Celcius : ");
                scanf("%f", &temperatureCal);
                printf("\nRESULT : \n");
                printf("\n-> Entered Temperature in Calvin : %f", temperatureCal);
                printf("\n-> Temperature converted to Fahrenheit : %f", toFahrenheit(temperatureCal));
                printf("\n\n\t\t\t");
                system("pause");
                }
                break;
            case 2 : {
                float temperatureFah;
                printf("Enter temperature in Degree Fahrenheit : ");
                scanf("%f", &temperatureFah);
                printf("\nRESULT : \n");
                printf("\n-> Entered Temperature in Fahrenheit : %f", temperatureFah);
                printf("\n-> Temperature converted to Fahrenheit : %f", toCalvin(temperatureFah));
                printf("\n\n\t\t\t");
                system("pause");
                }
                break;
            case 0 :printf("\nProgram Exited !\n"); 
                    exit(1);
        }
    }
    return(0);
}
float toFahrenheit(float temp) 
{
    return(((9.0/5.0) * temp) + 32);
}
float toCalvin(float temp)
{
    return((5.0/9.0) * (temp - 32));
}