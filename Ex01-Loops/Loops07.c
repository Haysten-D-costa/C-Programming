/* *****************************************************************************************************************
Lab ID        : 1.7
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to print multiplication tables of a number...
Input         : 
Output        : result statement...
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
***************************************************************************************************************** */
#include<stdio.h>

void tablesOf(int num, int range);
int main()
{
    int num, range;
    printf("\nEnter the tables you wish to display : ");
    scanf("%d", &num);
    printf("Enter range upto which tables required : ");
    scanf("%d", &range);
    printf("\nRESULTS : \n");
    printf("\n-> Requested for tables of : %d", num);
    printf("\n-> Range entered is upto   : %d", range);
    tablesOf(num, range);

    return(0);
}
void tablesOf(int num, int range) 
{
    printf("\n\n-> Tables : \n");
    for(int i=0; i<=range; i++) 
    {
        printf("    %d  x  %d  =  %d\n", num, i, num*i);
    }
}




















// void main()
// {
//     //Declaration of variables
//     int n,N,i=1,T;
//     //Input of variables
//     printf("\nEnter the table choice:  ");
//     scanf("%d",&N);
//     printf("\nEnter table limit:  ");
//     scanf("%d",&n);
//     //Output
//     printf("\nYou chose Tables of no. %d upto %d",N,n);
//     printf("\nYour tables are as follows:\n");
//     //Loop
//     do
//     {
//         T=N*i;
//         printf("\n%d x %d = %d",N,i,T);
//         i++;

//     }while(i<=n);

// }

