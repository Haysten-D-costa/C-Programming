//CP TO DISPLAY DAYS OF THE WEEK USING CERTAIN INPUT NOs FROM 1-7.
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    int day;

    //INPUT OF VARIABLES
    printf("Enter the day code:  ");
    scanf("%d",&day);

    //OUTPUT
    printf("Entered day code value = %d",day);

    switch(day)
    {
        case 1: printf("\nMONDAY");
                break;
        case 2: printf("\nTUESDAY");
                break;
        case 3: printf("\nWEDNESDAY");
                break;
        case 4: printf("\nTHURSDAY");
                break;
        case 5: printf("\nFRIDAY");
                break;
        case 6: printf("\nSATURDAY");
                break;
        case 7: printf("\nSUNDAY");
                break;
        default: printf("\nIncorrect input code...\nPlease verify code and try again\n(Range:1-7) ");
    }
    return(0);
}
